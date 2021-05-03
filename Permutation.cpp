#include<iostream>

using namespace std;

int main()
{
    long long int n, i;
    cin>>n;
    if (n <= 3)
    {
        if (n == 1)
        {
            cout<<"1";
        }
        else
        {
            cout<<"NO SOLUTION";
        } 
    }
    else
    {
        for (i = 1; i <= n ; i++)
        {
            if (i%2  == 0)
            {
                cout<<i<<" ";
            }
        }
        for (i = 1; i <= n; i++)
        {
            if (i%2 != 0)
            {
                cout<<i<<" ";
            }
        }
    }
}