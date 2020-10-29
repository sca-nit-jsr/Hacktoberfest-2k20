#include <bits/stdc++.h>
using namespace std;

/* 1. Simple Method in O(n) time
Loop through all the bits of an integer. If a bit at ith position is set in the i/p no.
then set the bit at (NO_OF_BITS – 1) – i in o/p.
Where NO_OF_BITS is number of bits present in the given number.

unsigned int reverseBits(unsigned int num)
{
	unsigned int NO_OF_BITS = sizeof(num) * 8;
	unsigned int reverse_num = 0, i, temp;

	for (i = 0; i < NO_OF_BITS; i++)
	{
		temp = (num & (1 << i));
		if(temp)
			reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
	}

	return reverse_num;
}*/

// 2. Standard Method in O(log(n)) time
unsigned int reverseBits(unsigned int num)
{
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;

    num >>= 1;
    while(num)
    {
       reverse_num <<= 1;
       reverse_num |= num & 1;
       num >>= 1;
       count--;
    }
    reverse_num <<= count;
    return reverse_num;
}

/* Driver function to test above function */
int main()
{
	unsigned int x = 2;
	printf("%u", reverseBits(x));
	getchar();
}
