#include <iostream>
using namespace std;

void leftRotatebyOne(long long int a[], int n)
{
    int temp = a[0], i;
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
 
    a[n-1] = temp;
}
 
void leftRotate(long long int a[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(a, n);
}

void printArray(long long int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    //Write your code here
    int n,k;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    leftRotate(a, k, n);
    printArray(a, n);
    return 0;
}
