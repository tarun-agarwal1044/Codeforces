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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    sort(arr,arr+n);

    ll mid=n/2;
    ll ans=arr[mid];
    for(int i=mid;i<n && k>0;)
    {
        ll index=upper_bound(arr,arr+n,arr[i])-arr;
        if(index==n)
        {
            ans=ans+k/(index-mid);
            k=0;
            break;
        }
        else
        {
            if(k>=((arr[index]-arr[i])* (index-mid)))
            {
                ans=ans+(arr[index]-arr[i]);
                k=k-(arr[index]-arr[i])* (index-mid);
                i=index;
            }
            else
            {           
                ans=ans+k/(index-mid);
                k=0;
                break;
            }
        }
    }
    if(k!=0)
    ans=ans+k/(n-mid);
    cout<<ans<<"\n";
    return 0;
}