#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,ans=0;
    cin>>n;
    map<ll,ll> arr;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        arr[a-i]+=a;
        ans=max(ans,arr[a-i]);
    }
    cout<<ans;
    return 0;
}