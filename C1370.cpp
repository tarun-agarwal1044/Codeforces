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
bool checkPrime(int n)
{
    int j=2;
    for(j=2;j<=sqrt(n);j++)
    {
        if(n%j==0)
        return 0;
    }
    return 1;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        // if(n%2==0 && n>2 && n & (n-1)==0)
        // cout<<"y"<<"\n";
        if(n==1 || ( n%2==0 && n>2 && (n & (n-1))==0 ) || (n>2 && n%2==0 && n%4!=0 && checkPrime(n/2)))
        cout<<"FastestFinger"<<"\n";
        else
        cout<<"Ashishgup"<<"\n";
    }
    return 0;
}



