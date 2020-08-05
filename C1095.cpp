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
    if(k<=n && k>=__builtin_popcount(n))
    {
        cout<<"YES\n";
        int c=__builtin_popcount(n);
        vi ans;
        for (int i = 31; i >= 0; i--)
        { 
            int z=n>>i; 
            if(z&1)
                ans.pb(pow(2,i));
        }
        k-=c;
        int index=0;
        while(k>0)
        {
            if(ans[index]>1)
            {
                ans.pb(ans[index]/2);
                ans.pb(ans[index]/2);
                ans[index]=-1;
                k--;
            }
            index++;
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==-1)
            continue;

            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    else
        cout<<"NO";
    return 0;
}



