#include<setjmp.h>
static jmp_buf buf;
main()
{	int a=2;
	volatile int b=4;
		
	printf("1>> a = %d\tb = %d\n", a, b);
	
	a=5, b=10;

	if(setjmp(buf)!=0)
	{	
		printf("2>> a = %d\tb = %d\n", a, b);
		
		//exit(0);
		sleep(1);

		printf("3>> a = %d\tb = %d\n", a, b);
	}

	
	printf("4>> a = %d\tb = %d\n\n", a, b);

	a=50, b=100;

	longjmp(buf, 1);

	printf("5>> a = %d\tb = %d\n", a, b);
}

/*******OUTPUT********

1>> a = 2	b = 4
4>> a = 5	b = 10

2>> a = 50	b = 100
3>> a = 50	b = 100
4>> a = 50	b = 100

2>> a = 50	b = 100
3>> a = 50	b = 100
4>> a = 50	b = 100
	   .		
	   .
	   .
	
*/
