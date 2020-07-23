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
        string s;
        cin>>s;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
            sort(arr,arr+n);
            vi count(26,0);
            for(int i=0;i<s.length();i++)
            count[(int)s[i]-97]++;
            int alpha=25;
            int z=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)
                z++;
                if(arr[i]>0)
                break;
            }
            string ans="";
            for(int i=0;i<n;i=i+z+1)
            {
                while(count[alpha]<z)
                {
                    alpha--;
                }
                for(int i=0;i<z;i++)
                {
                    ans=ans+(char)('a'+alpha);
                }
                z=0;
                for(int j=i+1;j<n;j++)
                {
                    arr[i]=arr[i]-abs(i-j);
                    if(arr[i]==0)
                    z++;
                }


            }
            cout<<ans<<"\n";
    }
    return 0;
}