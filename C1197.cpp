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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int> v;
    v.push_back(0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        v.push_back(arr[i]-arr[i-1]);
    }
    // for(int i=0;i<n;i++)
    // cout<<v[i]<<"\n";
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<v.size()-k+1;i++)
    ans+=v[i];
    cout<<ans<<"\n";
    

    return 0;
}