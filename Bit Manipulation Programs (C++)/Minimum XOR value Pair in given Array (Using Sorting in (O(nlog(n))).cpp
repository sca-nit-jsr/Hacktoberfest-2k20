#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findMinXor(vector<int> &A)
{
    sort(A.begin(),A.end());
    int mX = INT_MAX;
    int val = 0;
    // calculate min xor of consecutive pairs
    for (int i = 0; i <A.size()- 1; i++)
    {
        val =A[i] ^ A[i + 1];
        mX = min(mX, val);
    }
    return mX;
}

int main()
{
    vector <int> v = { 9, 5, 3 };
    cout<<findMinXor(v);
    return 0;
}
