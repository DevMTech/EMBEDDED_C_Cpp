
#define N 10

int main()
{
	secondSmallest();
	
	secondLargest();
	
	return 0;
}

int secondSmallest()
{
	int m, m2, i;

	int A[N] = {1, 3, 4, -1, 5, -4, -2};
	
	m=A[0]; m2;
	
	for(i=1; i<N; i++)
	{	if(A[i] < m)
		{ 	m2 = m;
			m = A[i];	
		}
		else if(A[i] < m2)
		{	m2 = A[i];
		}
	}
	printf("\nSmallest 	= %d\n", m);
	printf("2nd smallest 	= %d\n", m2);
	return m2;
} 

//A[i]	= 		 -2
// m 	=  1	 -1	 -4	-4
// m2 	=  0  	  1 	 -1	-2

int secondLargest()
{
	int m, m2, i;

	int A[N] = {1, 3, 4, -1, 5, -4, -2};
	
	m=A[0]; m2;
	
	for(i=1; i<N; i++)
	{	if(A[i] > m)
		{ 	m2 = m;
			m = A[i];	
		}
		else if(A[i] > m2)
		{	m2 = A[i];
		}
	}
	printf("\nLargest 	= %d\n", m);
	printf("2nd largest 	= %d\n", m2);
	return m2;
} 

