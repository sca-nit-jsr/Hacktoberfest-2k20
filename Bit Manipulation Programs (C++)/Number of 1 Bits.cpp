#include <bits/stdc++.h>
using namespace std;

/*1. Simple Method Q(log(n)) (theta of log(n))
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

// recursive function to count set bits
int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n & 1) + countSetBits(n >> 1);
}
*/

/* 2. Implementation of Brian Kernighan’s Algorithm in O(log(n))

unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
    n &= (n-1) ;
    count++;
    }
    return count;
}

// recursive function to count set bits
int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}*/

/* 3. Using Lookup table ( __builtin_popcount() ) in O(1) time

   __builtin_popcount (n);
*/

/* 4. Mapping numbers with the bit in O(1) time*/

int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

unsigned int countSetBits(unsigned int num)
{
    int nibble = 0;
    if (0 == num)
        return num_to_bits[0];

    // Find last nibble
    nibble = num & 0xf;

    // Use pre-stored values to find count in last nibble plus recursively add remaining nibbles.
    return num_to_bits[nibble] + countSetBits(num >> 4);
}
int main()
{
	// get value from user
	int n = 9; // 1001
	// function calling
	cout << countSetBits(n);

	return 0;
}
