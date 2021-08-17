#include<stdio.h>
void f(char *);

int i=1, j=1, l=1, m=1;

main()
{
	f("123");
}

void f(char a[])
{	printf("j = %d\t", j++);

	int k=0;
	printf("a[] = "); while(a[k]!='\0') {printf("%c", a[k++]);} printf("\n");

	if(a[1]=='\0') return;
	f(a+1);
	f(a+1);
	printf("\ni = %d \ta[1] = %c\n\n", i++, a[1]);
}

/* OUTPUT 

j = 1	a[] = 123
j = 2	a[] = 23
j = 3	a[] = 3
j = 4	a[] = 3

i = 1 	a[1] = 3

j = 5	a[] = 23
j = 6	a[] = 3
j = 7	a[] = 3

i = 2 	a[1] = 3


i = 3 	a[1] = 2
*/
