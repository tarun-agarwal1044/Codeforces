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
    int t;
    cin>>t;
    while(t--)
    {
        ull a,k;
        cin>>a>>k;
        k--;
        while(k--)
        {
            int min=99,max=-1;
            ull n=a;
            while(n!=0)
            {
                int r=n%10;
                n=n/10;
                if(r>max)
                max=r;
                if(r<min)
                min=r;
            }
            if(min==0 || max==0)
            break;
            else
            {
                a=a+max*min;
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}