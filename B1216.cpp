#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr, arr+n); 
    reverse(arr, arr + n); 
    ll ans=0;

    for(int i=0;i<n;i++)
        ans+=(arr[i].first*i+1);

    cout<<ans<<"\n";
    for(int i=0;i<n-1;i++)
    cout<<(arr[i].second+1)<<" ";
    cout<<(arr[n-1].second+1);

    return 0;
}