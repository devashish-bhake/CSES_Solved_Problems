#include<iostream>

using namespace std;

int main()
{
    long long int *arr, n, ct = 0;
    long long int i;
    cin>>n;
    arr = new long long int [n];
    for (i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    for (i = 0; i < n ; i++)
    {
        if (i == n-1)
        {
            break;
        }
        else if (arr[i] == arr[i+1])
        {
            continue;
        }
        
        else if (arr[i]>arr[i+1])
        {
            
            while (arr[i]>arr[i+1])
            {
                arr[i+1] = arr[i+1] + 1;
                ct = ct + 1;
            }
                
        }
        else
        {
            continue;
        }
        
    }
    
    cout<<ct;
    return 0;
}