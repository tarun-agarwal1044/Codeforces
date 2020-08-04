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

    ll n,num;
    cin>>n>>num;
    vi ans;
    for(int i=0;i<n && num > 0;i++)
    {
        int z=num%10;
        num=num/10;

        if(z<=1)
        continue;
        if(z==4)
        {
            ans.pb(2);
            ans.pb(2);
            ans.pb(3);
        }
        else if(z==6)
        {
            ans.pb(3);
            ans.pb(5);
        }
        else if(z==8)
        {
            ans.pb(2);ans.pb(2);ans.pb(2);ans.pb(7);
        }
        else if(z==9)
        {
            ans.pb(3);ans.pb(3);
            ans.pb(2);ans.pb(7);
        }
        else
        {
            ans.pb(z);
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i];
    cout<<"\n";
    return 0;
}



