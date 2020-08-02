#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define vi              vector<int>
#define vll             vector<ll>
#define pii             pair<int,int>
#define pll             pair<ll,ll>
#define pb              push_back
#define mp              make_pair

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------//
//convert ll to binary string of 64 bits
// string decToBinary(ll n) 
// { 
//     string ans="";
//     for (ll i = 63; i >= 0; i--) { 
//         ll k = n >> i; 
//         if (k & 1) 
//             ans+='1'; 
//         else
//             ans+='0';
//     }
//     return ans; 
// } 
//-----------------------------------------------------------------------------------------------------------------------------------//
//convert binary string to ll
// ll btod(string s)
// {
//     ll ans=0;
//     int z=0;
//     for(int i=(s.length()-1);i>=0;i--)
//     {
//         if(s[i]=='1')
//         ans+=pow(2,z);
//         z++;
//     }
//     return ans;
// }
//-----------------------------------------------------------------------------------------------------------------------------------//

int bsearch(ll arr[],ll n,ll t)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==t)
        return mid;
        else if(arr[mid]>t)
        high=mid-1;
        else
        low=mid+1;
    }
    // if(t==56)
    //     {
    //         cout<<low<<"\n";
    //     }
    if(arr[low]>t || low==n)
    {
        
        return low-1;
    }
    return low;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    ll arr[n];
    ll psum[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        psum[i]=arr[i];
        else
        psum[i]=arr[i]+psum[i-1];
    }
    // for(int i=0;i<n;i++)
    // cout<<psum[i]<<" ";
    // cout<<"\n";
    ll ans=0;
    ll x=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        x=bsearch(psum,n,t);
        else
        x=bsearch(psum,n,t+psum[i-1]);
        // if(i==7)
        // cout<<x<<"\n";
        x=x-i;
        //if(i==7)
        //cout<<x<<"\n";
        ans=max(x+1,ans);
    }
    cout<<ans;
    return 0;
}



