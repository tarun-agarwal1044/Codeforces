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
    int te;
    cin>>te;
    while(te--)
    {
        ll n,cnt=0;
        cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
            if(x==1)
            cnt++;
        }
        int t=v.size();
        ll f=0,i=0;
        if( n%2 && cnt==n || !cnt)
        {
            cout<<"First\n";
            continue;
        }
        if(n==cnt && n%2==0)
        {
            cout<<"Second\n";
            continue;
        }
        while(v[i]==1)
        {
            f=!f;
            i++;
        }
        if(!f)
        {
            cout<<"First\n";
            continue ;
        }
        else
        {
            cout<<"Second\n";
        }
    }
    return 0;
}