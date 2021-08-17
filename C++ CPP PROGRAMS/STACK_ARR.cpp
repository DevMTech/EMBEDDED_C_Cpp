
#include <iostream>

#define L 10
//int arr[L] = {0};
int top=-1;

using namespace std;

int setBit(int x, int y)
{	x|=(1<<y); // 0001 0000
	return x;
}

void push(int v, int* arr)
{
	if(top == L)
		cout << "\n STACK FULL \n";
	else
	{
		arr[++top] = v;
	}
		
}

int pop(int* arr)
{	int v;
	if(top == -1)
	{	cout << "\n STACK EMPTY \n";
		return '\0';
	}
	else
	{ v = arr[top];
	  --top;		
	  return v;
	}
	
}

int main()
{	int depth=0, flag=1, option, value, retVal;
	
	while(depth < 1)
	{	cout << "\n ENTER STACK DEPTH : ";
		cin >> depth;	
	}

	int* arr = new int(depth);  
	 
	while(flag)
	{
		cout << "\nPRESS 1 TO PUSH NUMBER TO STACK\n";
		cout << "PRESS 2 TO POP NUMBER FROM STACK\n";
		cout << "PRESS 0 TO EXIT\n";
		cout << "YOUR INPUT : ";
		cin >> option;
		
		switch(option)
		{
			case 0:	flag = 0; break;
			
			case 1:	cout << "\nENTER THE VALUE TO PUSH : "; 
					cin >> value;
					push(value, arr);
					break;
					
			case 2:	retVal = pop(arr);
					if(retVal != '\0')
						cout << "NUMBER POPPED FROM STACK : " << retVal << endl;
					break;
					
			default: cout << "\nINVALID INPUT. TRY AGAIN.";		
		}
		
	}
	
//	push(5, arr);
//	cout << endl << pop(arr);
//	pop(arr);
	int i;
	for(i=0;i<32;++i)
	{	cout << "\n\nSET BIT "<< i <<" \t: " << setBit(0, i);
	}
	 
	return 0;
	
}
