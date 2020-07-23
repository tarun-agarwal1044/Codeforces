#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int c=0,i;
    for(i=0;i<n && c<k;i++)
    {
        if(arr[i]<=8)
        c=c+arr[i];
        else
        {
            c=c+8;
            if(i<n-1)
            arr[i+1]+=(arr[i]-8);            
        }
    }
    if(c>=k)
    cout<<i;
    else
    cout<<"-1";
    return 0;
}