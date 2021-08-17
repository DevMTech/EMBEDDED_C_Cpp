#include<stdio.h>
main(int argc, char *argv[])
{
	if(argc==1)printf("\nerror\n");
	
	printf("1	%c\n", *(argv[0]));
	printf("2	%c\n", *(argv[1]));
	printf("3	%c\n", *(argv[1] + 1));
	printf("4	%c\n", *(argv[2]));
	printf("5	%c\n", (*(argv+1))[2]);
	printf("6	%c\n", argv[1][2]);
}
