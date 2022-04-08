#include <iostream>
#include <bitset>
using namespace std;
#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
#define COUNT_BITS B6(0), B6(1), B6(1), B6(2)
unsigned int lookup[256] = { COUNT_BITS };
int numOfSetBits(int n)
{
    int count = lookup[n & 0xff] + lookup[(n >> 8) & 0xff] +lookup[(n >> 16) & 0xff] +lookup[(n >> 24) & 0xff];
    return count;
}
int main()
{
    long long N;
    cin>>N;
    long long A[N];
    long long val=0;
    long long value;
    for(long long i=0;i<N;i++)
    {
        cin>>value;
        val+=numOfSetBits(value);
    }
    cout<<val;

    return 0;
}
