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
    int n,s,t;
    cin>>n>>s>>t;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    if(s==t)
    {
        cout<<"0"<<"\n";
        return 0;
    }
    int c=0;
    int x=arr[s];
    while(x!=t)
    {
        x=arr[x];
        c++;
        if(x==arr[s])
        break;
    }
    if(x==t)
    cout<<c+1<<"\n";
    else if(x==arr[s])
    cout<<"-1"<<"\n";

    

    return 0;
}



