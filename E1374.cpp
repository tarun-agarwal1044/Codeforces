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

bool cmp(pll a,pll b)
{
    if(a.first!=b.first)
        return a.first>b.first;
    return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    vector<ll> va;
    vector<ll> vb;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if(y==1)
            a++;
        if(z==1)
            b++;
        if(y==1 && z==1)
        v.pb(x);
        if(y==1 && z==0)
        va.pb(x);
        if(z==1 && y==0)
        vb.pb(x);
    }
    if(a<k || b<k)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
        ll ans=0;
        int z=k-v.size();
        for(int i=0;i<va.size() && i<vb.size();i++)
        {
            v.pb(va[i]+vb[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
        {
            ans+=v[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}