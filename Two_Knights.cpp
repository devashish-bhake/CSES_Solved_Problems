#include<iostream>

using namespace std;

int main()
{
    long long int n, i, final;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        final = (((i*i)*((i*i) - 1))/2) - (4*(i-1)*(i-2));
        cout<<final<<endl;
    }
}