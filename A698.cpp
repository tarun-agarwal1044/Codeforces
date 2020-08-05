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
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]==0)
            ans++;
            else if(arr[i]==3)
            {
                int j=i+1;
                while(j<n)
                {
                    if(arr[j]==2 || arr[j]==1 || arr[j]==0)
                    break;
                    j++;
                }
                i=j-1;
            }
        }
        else
        {
            if(arr[i]==0)
            ans++;
            else
            {
                if(arr[i]==1 && arr[i-1]==1)
                {
                    ans++;
                    arr[i]=0;
                }
                else if(arr[i]==2 && arr[i-1]==2)
                {
                    ans++;
                    arr[i]=0;
                }
                else if(arr[i]==3 && arr[i-1]==1)
                {
                    arr[i]=2;
                }
                else if(arr[i]==3 && arr[i-1]==2)
                {
                    arr[i]=1;
                }
                else if(arr[i]==3 && arr[i-1]==0)
                {
                    int j=i+1;
                while(j<n)
                {
                    if(arr[j]==2 || arr[j]==1 || arr[j]==0)
                    break;
                    j++;
                }
                i=j-1;
                }
            }
        }

    }
    cout<<ans<<"\n";
    return 0;
}