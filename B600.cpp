#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll middle;

ll binarySearch(ll arr[], ll l, ll r, ll x) 
{
    ll m;
    while (l <= r)
    { 
         m = l + (r - l) / 2;
        if (arr[m] == x) 
            return m;
        if (arr[m] < x) 
            l = m + 1;
        else
            r = m - 1; 
    }
    middle=m;
    return -1; 
} 


int main()
{
    int n,m;
    cin>>n>>m;
    ll arr1[n];
    ll arr2[m];
    ll ans[m]={0};
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];

    sort(arr1,arr1+n);
    for(int i=0;i<m;i++)
    {
        ll x = binarySearch(arr1,0,n-1,arr2[i]+1);
        if(x!=-1)
        ans[i]=x;
        else
        {
            if(arr2[i]<arr1[0])
            ans[i]=0;
            else if(arr2[i]>arr1[n-1])
            ans[i]=n;
            else
            {
                if(arr2[i]<arr1[middle])
                    ans[i]=middle;
                else
                    ans[i]=middle+1;
            }
        }
    }
        for(int i=0;i<m;i++)
            cout<<ans[i]<<" ";
    return 0;
}