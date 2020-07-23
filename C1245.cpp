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
    int mod=1e9+7;
    string s;
    cin>>s;
    int a,b=1,c=0;
    for(int i=0;i<s.size();i++)
    if(s[i]=='w'||s[i]=='m')
    {
        cout<<"0";
        return 0;
    }   
        for(int i=0;i<s.size();i++)
        {
            // if(i==0)
            // cout<<s[i-1]<<"\n";
            if(s[i]==s[i-1]&&(s[i]=='u'||s[i]=='n'))
                a=(b+c)%mod;
            else
            {
                 a=b;                           
            }
            c=b,b=a;   
        }
    cout<<b;
    return 0;
}



