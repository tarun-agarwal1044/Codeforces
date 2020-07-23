#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=x*arr[i];
        if(x!=1)
        x--;
    }
    cout<<ans;
    return 0;
}