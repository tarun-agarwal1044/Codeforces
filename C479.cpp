#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    sort(arr,arr+n);
    int ans=min(arr[0].first,arr[0].second);
    for(int i=1;i<n;i++)
    {
        if(ans<=arr[i].second)
        ans=arr[i].second;
        else
        ans=arr[i].first;
    }
    cout<<ans<<"\n";
    return 0;
}