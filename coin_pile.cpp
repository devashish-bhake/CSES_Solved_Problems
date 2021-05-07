#include<iostream>

using namespace std;

int main()
{
    long long int t, i, *a, *b;
    cin>>t;
    a = new long long int [t];
    b = new long long int [t];
    for (i = 0; i < t; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (i = 0; i < t; i++)
    {
        if ((a[i] + b[i])%3 == 0 && min(a[i], b[i]) * 2 >= max(a[i], b[i]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}