#include <stdio.h>

int sum3 ( int a, int b, int c) 
{
 int sum = 0;
 sum = a + b + c;
 return sum;
}

static int ii=10;

int main ( int argc, char ** argv ) 
{
	// int x = 1;
	// x = sum3 (x, x, x);
	// x = sum3 (x, x, x);
	
	printf("Hello!\n");
	
	int a, b; 
	a=b=1320;	
	
//	int *x, *y, **z;
//	x=y=NULL; z=NULL;
//	a=1;
//	x=&a;
//	y=&b;
//	z=&y;
//	*z=x;
//	b=*y;
//	
//	int c, *u; // u=NULL;
//	c=0;
//	*u=&c;
	
	int* ptr = &a;
	
	printf("\n ptr = %u | *ptr = %d | &ptr = %u \n", ptr, *ptr, &ptr);
	
	printf("Result");
	int arr[4];
	// printf("%d", arr[3]);
 
//	rangeOfInt();
	
	
	return 0;
}

int rangeOfInt()
{
	int i=2^31, j=0;
	while(++i)
	{	j=i;
		printf("\n\ni=%d\n", j);
//		printf(".");
	}
	printf("\n\ni=%d\n", j);
	return 0;
}
