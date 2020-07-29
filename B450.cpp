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
    ll x,y,n;
    cin>>x>>y>>n;
    //cout<<x<<" "<<y<<" "<<n<<"\n";
    ll arr[6];
    arr[0]=x%1000000007;
    arr[1]=y%1000000007;
    for(int i=2;i<6;i++)
        arr[i]=(arr[i-1]-arr[i-2])%1000000007;
    // for(int i=0;i<6;i++)
    // cout<<arr[i]<<"\n";
    n=n%6;
    n--;
    if(n==-1)
    n=5;
    //cout<<n<<"\n";
    //cout<<arr[n]<<"\n";
    if(arr[n]>0)
    cout<<arr[n]%1000000007;
    else
    cout<<(1000000007 + arr[n])%1000000007;
    //cout<<(arr[(n-1)%6]%1000000007+1000000007)%1000000007;
    return 0;
}



