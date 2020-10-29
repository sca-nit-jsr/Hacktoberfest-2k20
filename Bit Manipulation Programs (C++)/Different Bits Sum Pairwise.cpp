
// C++ program to compute sum of pairwise bit differences
#include <bits/stdc++.h>
using namespace std;

int sumBitDifferences(int arr[], int n)
{
	long long ans = 0; // Initialize result

	// traverse over all bits
	for (int i = 0; i < 32; i++)
	{
		// count number of elements with i'th bit set
		long long cnt = 0;
		for (int j = 0; j < n; j++)
			if ( (arr[j] & (1 << i)) )
				cnt++;

		// Add "count * (n - count) * 2" to the answer
		ans += (cnt * (n - cnt) * 2);
        ans %= 1000000007;
	}

	return ans;
}

// Driver prorgram
int main()
{
	int arr[] = {1, 3, 5};
	int n = sizeof arr / sizeof arr[0];
	cout << sumBitDifferences(arr, n) << endl;
	return 0;
}
