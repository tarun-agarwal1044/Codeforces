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
    int n,m;
    cin>>n>>m;
    if((m>=n || n==(m+1)) && m<=(2*n+2))
    {
        // int z=m-n;
        // m=m-2*z;
        // n=n-2*z;
        // while(z--)
        // cout<<"110";
        // while(m-- && n--)
        // {

        //     cout<<"10";
        //     m--,n--;
        // }
        if((n-m)==1)
        {
            while(m--)
            cout<<"01";
            cout<<"0";
        }
        else
        while(m>0 || n>0)
        {
            if(m>0)
            {
                cout<<"1";
                m--;
            }
            if(m>0 && (m+1)>n)
            {
                cout<<"1";
                m--;
            }
            if(n>0)
            {
                cout<<"0";
                n--;
            }
        }
    }
    else
    cout<<"-1";
    return 0;
}



