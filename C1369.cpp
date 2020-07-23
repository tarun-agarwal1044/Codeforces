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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        int arr[n];
        int fr[k];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<k;i++)
        cin>>fr[i];
        sort(arr,arr+n);
        sort(fr,fr+k,greater<int>());
        ll ans=0;
        int start=0,end=n-k;
        for(int i=0;i<k;i++)
        {
            int x=fr[i];
            if(x==1)
            {
                ans=ans+arr[end]+arr[end];
                end++;
            }
            else
            {
                ans=ans+arr[start]+arr[end];
                start+=x-1;
                end++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}