#include <stdio.h>
int singleNumber(int A[], int n)
{
    int count[32] = {0};
    int result = 0;
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((A[j] >> i) & 1)
            {
                count[i]++;
            }
        }
        result |= ((count[i] % 3) << i);
    }
    return result;
}

int main()
{
	int arr[] = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The element with single occurrence is %d ", singleNumber(arr, n));
	return 0;
}
