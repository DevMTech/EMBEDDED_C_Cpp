/*
	Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
	https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/ 
	
	Example 1:
	Input: nums = [4,3,2,7,8,2,3,1]
	Output: [5,6]
	
	Example 2:
	Input: nums = [1,1]
	Output: [2]


*/

int main()
{	
	int a[] = {6, 2, 3, 4, 2, 4, 3, 6};
	int size = sizeof(a)/sizeof(a[0]);
	
	findMissing(a, &size);
	return 0;
}

// int findMissing(int a[], int* size) // ALSO WORKS
int findMissing(int* a, int* size)
{	int i;
	
	for(i = 0; i < *size; i++)
	{	int val = a[i]-1;		
		if(a[val] > 0)
			a[val]*=-1;	
	//	a[val] = (a[val] > 0) ? -1*a[val] : a[val]; // A[abs(A[i])-1] = -1*abs(A[abs(A[i])-1]);
	}
	
	for(i=0; i < *size; i++)
	{	if(a[i] > 0)
			printf("%d, ", i+1);
	}
	
	return 0;
}
