// ADVANCED_TEST_IN_C_ASHOK_PATHAK / TEST1.C

// 3. 
#include <stdio.h>
void f(char *);
main()
{	f("123");
}

void f(char a[]) // 123 // 23 // 3
{	if(a[1]=='\0') return;
	f(a+1); // 23 // 3
	f(a+1); // 3 // 23
	printf("%c", a[1]); // 3 3 2 
}
// 3 3 2
