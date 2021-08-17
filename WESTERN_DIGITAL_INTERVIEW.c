//	WESTERN DIGITAL INTERVIEW - PENDRIVE, HDD, SSD

// https://nvmexpress.org/specifications/
// NVMe, PCIe, SATA, Synopsis ARC 600/700/ES/EM, RISC, ASIC, JTAG, NAND Memory, PARALLELISM 

/*
HOW INTERRUPTS WORKS? IVT, ISR, 

CAN ISR HAVE A RETURN VALUE?

WHAT IS INTERRUPT LATENCY?

WHAT HAPPENS WHEN A HIGHER PRIORITY INTERRUPT OCCURS INSIDE AN ISR WHICH HAS DISABLES GLOBAL INTERRUPTS? WILL THAT HIGHER PRIORITY INTERRUPT BE MISSED?

WHAT IS A REENTRANT FUNCTION?

CAN THERE BE A STATIC VARIABLE INSIDE A REENTRANT FUNCTION?

WHAT IS A WATCHDOG TIMER?

IS AN EXTERN VARIABLE IS DECLARED BUT NOT DEFINED, THEN IS WHICH STAGE OF COMPILATION WILL THERE BE AN ERROR? 

WHAT IS SEGMENTATION FAULT? WHEN DOES IT OCCUR?

IPC COMMUNICATION

BINARY SEMAPHORE VS MUTEX?

WHAT IS BIT ARBITRATION IN I2C BUS?

DANGLING POINTER, NULL POINTER?

CODE TO CHECK IF A NUMBER IS POWER OF TWO OR NOT  

CODE TO CHECK ENDIAN-NESS OF SYSTEM 

CODE TO PRINT THE MIDDLE NODE OF A LINKED LIST WITHOUT FINDIND OUT/KNOWING THE TOTAL NUMBER OF NODES IN THE LINKED LIST

REVERSE A NUMBER DEPENDING ON INPUT FORMAT PROVIDED (DEC OR HEX )
1234 => 4321
0x1234 => 0x4321

*/

// CODE TO CHECK IF A NUMBER IS POWER OF TWO OR NOT 
	int j;
	for(j=0; j<32; j++)
	{	if(n&(1<<j) && count ) 
		{ printf("%d power of 2", j);
		  count++				
		}
	}
 

// OUTPUT OF FOLLOW CODE
Main()
{
Union u.u1;
U1.a = 0xFFFF;
U1.b = ‘A’;
Print u1.a // ? output print // DOES IT DEPEND ON THE ENDIAN-NESS OF THE SYSTEM
}


// CODE TO CHECK ENDIAN-NESS OF SYSTEM 
union
{	int n;
	char a; 
}u;


u.n = 0x1234;

u.a = 'a';

char* c = (char*) u.n;

if(*c == u.a) // little endian
else // big endian


// CODE TO PRINT THE MIDDLE NODE OF A LINKED LIST WITHOUT FINDIND OUT/KNOWING THE TOTAL NUMBER OF NODES IN THE LINKED LIST

struct node
{
	node* next;
	int data;
};

node* head;
node* p;
p = head;

int i = 0, count = 0;
while(p->next!='\0')
{
	count++;
}

node *q;

while(i<count/2)
{	p=p->next;
	i++;
}


q = p;

/////////////////////////////////////////////////////////////////////////////////////// 

#include <stdio.h>

void countOnes(int n, int* cptr)
{	 
	if(n)
	{	printBinary(n>>1, cptr);
	}
	*cptr+=(n & 1)? 1 : 0;	
}

void printBinary(int n)
{	 
	if(n>>1)
	{	printBinary(n>>1);
	}
	printf("%d", (n & 1)? 1 : 0); 
 
}

unsigned int set(unsigned int n, unsigned int x)
{	n|=(1<<x); 
	return n;
}

unsigned int clear(unsigned int n, unsigned int x)
{	n&=~(1<<x); 
	return n;
}

typedef enum {DEC=10, HEX=16} Type;

struct cType
{	unsigned int num : 27;
	unsigned int type : 5; // 11111
	Type t;
};

main()
{	int p=0;
	
	struct cType arr[] = {{34, DEC}, {0x65, HEX}, {72, DEC}, {901, DEC}, {0x738, HEX}}; // {0};
	 
	int n = 0x1234;
	 
	Type convType = HEX; // DEC

	while(n>0) // REVERSE A NUMBER -> DEC OR HEX FORMAT AS PROVIDED
	{	
		p=p*convType + n%convType;
		n=n/convType;
	}
	
	printf("0x%x", p);
	
	unsigned int binN = 0b11110111; 
	
	int count = 0;
	
	while(binN) // COUNT NUMBER OF 1'S IN binN
	{
		int n = 1;
		n = binN & n;
		if(n) count ++;
		
		binN = binN >> 1;
	}
	
	// countOnes(n, count);
	
	printf("\nNUMBER OF 1'S IN ");
	printBinary(binN);
	printf(": %d ", count);
	
	int x = 5, y = 4;
	
	n|=(1<<x)|(1<<y); // SET X & Y BITS
	
	unsigned int c = 0b10101010; // COPY 5TH BIT OF c TO  n
	
	unsigned int m = (1<<x); // 0010 0000 
	
	printf("\nBINARY of c: ");
	printBinary(c);
	
	printf("\nBINARY of m: ");
	printBinary(m);
	
	n = 0;
	
	n = (c & m)? set(n, x) : clear(n, x); 
	
	printf("\nBINARY of n: ");
	printBinary(n);
	
	countOnes(n, &count);
	
	printf("\nNUMBER OF 1'S IN ");
	printBinary(n);
	printf(": %d ", count);

}

 

