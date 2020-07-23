#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        break;
    }
    if(i==n)
    x=0;
    else
    {
        x=n-i;
    for(;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        break;
    }
    if(i!=(n-1) || arr[n-1]>arr[0])
    x=-1;
    }
    cout<<x;
    return 0;
}