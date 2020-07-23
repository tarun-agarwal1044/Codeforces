#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int z=1,ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=z)
        {
            ans++;
            z++;
        }
    }
    cout<<ans;
    return 0;
}