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

        int s=n-1;

        int i=0,j,m=1000;
        //cout<<"test"<<"\n";
        while(i<n && s>0)
        {
            // if(arr[i]==(i+1))
            // {
            //     i++;
            //     continue;
            // }
            m=1000,j;
            int index=i;
            for(j=i;j<n;j++)
            {
                
                if(arr[j]<m)
                {
                    m=arr[j];
                    index = j;
                }
                
            }
            
            int z=s;
            //s=s-(index-i);
            int temp=arr[index];
            for(j=index-1; j>=i && z>0;j--,z--)
            {
                s--;  
                arr[j+1]=arr[j];
            }
            arr[j+1]=temp;
            if(index==i)
            i++;
            else
            i=index;
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";
        //cout<<m<<"\n";
    }
    return 0;
}



