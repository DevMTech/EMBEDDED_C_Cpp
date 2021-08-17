
/*
	Find the missing number in a given array:
	Given an array of n distinct elements, within the range 1 to n+1, 
	find the missing number in linear time.  
	Input : {7, 1, 5, 3, 8, 2, 9, 10, 4} => Output : 6
*/

#include <stdio.h>

/* 	https://www.techiedelight.com/find-missing-number-array/
	XOR of a number with itself equals 0.				5 ^ 5 = 0
	XOR of a number with 0 equals that number itself:	0 ^ 5 = 5
*/
int getMissingNumber(int arr[], int n)
{
    // Compute XOR of all the elements in the array
    int xor = 0;
    for (int i = 0; i < n; i++)  
        xor ^= arr[i]; // xor = xor ^ arr[i];
     
    // Compute XOR of all the elements from 1 to 'n+1'
    for (int i = 1; i <= n + 1; i++)  
        xor ^= i; // xor = xor ^ i;
     
    return xor;
}

int main()
{ 
  int arr[] = { 7, 1, 5, 3, 8, 2, 9, 10, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("\nThe missing number is %d", getMissingNumber(arr, n));

//  UNCOMMENT BELOW IF USING : findMissingNumber()
//  int i, n;
//  printf("Enter the size of the array : ");
//  scanf("%d", &n);
//
//  int arr[n - 1];
//
//  printf("Enter the values : \n");
//  for (i = 0; i < n; i++)
//  {    scanf("%d", &arr[i]);
//  }

//  int missingNumber = findMissingNumber(arr, n);
//  printf("\nMissing number is: %d\n", missingNumber);
  
  return 0;
}

// https://www.codevscolor.com/c-find-missing-number-array
//int findMissingNumber(int arr[], int size)
//{
//  int i;
//  int firstXOR = 1;
//  int secondXOR = arr[0];
//
//  for(i = 2; i <= size + 1; i++)
//    firstXOR = firstXOR ^ i;
//  
//  for(i = 1; i < size; i++)
//    secondXOR = secondXOR ^ arr[i];
//
//  return firstXOR ^ secondXOR;
//}
