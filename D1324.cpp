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
//     ll z=0;
//     for(ll i=(s.length()-1);i>=0;i--)
//     {
//         if(s[i]=='1')
//         ans+=pow(2,z);
//         z++;
//     }
//     return ans;
// }
//-----------------------------------------------------------------------------------------------------------------------------------//



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll t[n],s[n],arr[n];
    ll x;
    for(ll i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int c=0;
    for(ll i=0;i<n;i++)
    {
        arr[i]=t[i]-s[i];
        if(arr[i]>0)
        c++;
    }
    sort(arr,arr+n);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll x=arr[i];
        if(x<0)
        {
            ll z=-x;
            ll index=lower_bound(arr,arr+n,z+1)-arr;
            ans+=(n-index);
        }
        else if(x>0)
        {
            ll z=x;
            ll index=lower_bound(arr+i+1,arr+n,z)-arr;
            ans+=(n-index);
        }
        else
        {
            ans=ans+c;
        }
        
    }
    cout<<ans<<"\n";
    return 0;
}