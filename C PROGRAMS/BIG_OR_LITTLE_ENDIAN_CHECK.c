//CODE TO CHECK ENDIAN-NESS OF SYSTEM
#include <stdio.h>
#include <stdint.h> // uint16_t uint8_t https://www.cplusplus.com/reference/cstdint/

int endianCheck() // IF TRUE, IT'S LITTLE-ENDIAN (LITTLE=1|BIG=0)
{
//	uint16_t i = 1;	/* 	i = 0x0001 
//						In big endian, stored as : 0x0001 
//						In little endian, stored as : 0x0100 */
//	uint8_t* x = (uint8_t*)&i; /* x points to the first byte of i */
//	(*x)
//	? printf("\n\tLittle Endian\n") /* First byte is 0x01 */
//	: printf("\n\tBig Endian\n");	/* First byte is 0x00 */
	
	unsigned int i = 1;
	char* x = (char*)&i; 
	return (int)(*x);	 // IF TRUE, IT'S LITTLE-ENDIAN (LITTLE=1|BIG=0)
}	
 
int main(int argc, char const *argv[])
{
	//printf("\n ENDIAN (BIG=0|LITTLE=1) : %d ", endianCheck());
	
	(endianCheck())? printf("\n LITTLE ENDIAN") : printf("\n BIG ENDIAN"); // IF TRUE, IT'S LITTLE-ENDIAN (LITTLE=1|BIG=0)
	
}
