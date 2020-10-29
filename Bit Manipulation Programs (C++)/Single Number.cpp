#include <stdio.h>
int singleNumber(int A[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
       result ^= A[i];
    }
    return result;
}

int main()
{
	int arr[] = {1,2,2,3,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The element with single occurrence is %d ", singleNumber(arr, n));
	return 0;
}
