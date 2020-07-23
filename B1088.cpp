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
    sort(arr,arr+n);
    int s=arr[0];
    k--;
    cout<<arr[0]<<"\n";
    for(int i=1;i<n && k>0;i++)
    {
        if(arr[i]-s>0)
        {
            arr[i]-=s;
            s+=arr[i];
            cout<<arr[i]<<"\n";
            k--;
        }
    }
    if(k!=0)
    for(int i=0;i<k;i++)
    cout<<"0"<<"\n";
    return 0;
}