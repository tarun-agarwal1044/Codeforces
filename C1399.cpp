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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr,arr+n);
        bool vis[n];
        if(n==1)
        {
            cout<<"0"<<"\n";
            continue;
        }
        memset(vis,false,sizeof(vis));
        int ma=arr[n-1]+arr[n-2];
        int mi=arr[0]+arr[1];
        int ans=0;
        for(int i=mi;i<=ma;i++)
        {
            int c=0;
            memset(vis,false,sizeof(vis));
            for(int j=0;j<n;j++)
            {
                if(vis[j]==true)
                continue;

                for(int k=0;k<n;k++)
                {
                    if(vis[k]==true || k==j)
                    continue;
                    if((arr[j]+arr[k])==i)
                    {
                        vis[j]=true;
                        vis[k]=true;
                        c++;
                        //cout<<j<<" "<<k<<" "<<i<<"\n";
                        break;
                    }
                }
            }

            ans=max(ans,c);
        }
        cout<<ans<<"\n";
    }
    return 0;
}



