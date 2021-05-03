#include<iostream>

using namespace std;

int main()
{
    long long int n, i;
    unsigned long long int prod = 1; 
    cin>>n;
    for (i = 0; i < n; i++)
    {
        prod = prod * 2;
        prod = prod%1000000007;
    }
    cout<<prod;
    return 0;
}