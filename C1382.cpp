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
void reverse(int arr[],int c)
{
    for(int i=0;i<c;i++)
    {
        arr[i]=(arr[i]+1)%2;
    }
    int x=c-1;
    for(int i=0;i<c/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[x];

        arr[x]=temp;
        x--;
    }
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
        string n1,n2;
        cin>>n1>>n2;
        int arr1[n],arr2[n];
        //cout<<"test"<<"\n";
        for(int i=0;i<n;i++)
        arr1[i]=n1[i]-48;
        for(int i=0;i<n;i++)
        arr2[i]=n2[i]-48;
        vi ans;
        // for(int i=0;i<n;i++)
        // cout<<arr1[i]<<" ";
        // cout<<"\n";
        // for(int i=0;i<n;i++)
        // cout<<arr2[i]<<" ";
        // cout<<"\n";
        for(int j=n-1;j>=0;j--)
        {
            if(arr1[j]==arr2[j])
            continue;
            if(arr1[0]!=arr2[j])
            {
                ans.pb(j);
                reverse(arr1,j+1);
            }
            else
            {
                ans.push_back(0);
                arr1[0]=(arr1[0]+1)%2;
                ans.push_back(j);
                reverse(arr1,j+1);
            }
        }
        cout<<ans.size()<<" ";
        if(ans.size()==0)
        cout<<"\n";
        if(ans.size()>0)
        {
        for(int i=0;i<ans.size()-1;i++)
        cout<<ans[i]+1<<" ";
        cout<<ans[ans.size()-1]+1<<"\n";
        }
    }
    return 0;
}