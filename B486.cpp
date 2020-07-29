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
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int z=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            z++;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                int row=0,col=0;
                int x=0,y=0;
                for(int k=0;k<m;k++)
                {
                    if(arr[k][j]==1)
                    x++;
                }
                for(int k=0;k<n;k++)
                {
                    if(arr[i][k]==1)
                    y++;
                }
                if(x!=m && y!=n)
                {
                    //cout<<i<<" "<<j<<" "<<x<<" "<<y<<"\n";
                    cout<<"NO"<<"\n";
                    return 0;
                }
            }
        }
    }
    if(z==0)
    {
        cout<<"YES"<<"\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        return 0;
    }

    vi r,c;
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            cnt++;
        }
        if(cnt==n)
        r.pb(i);
    }
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<m;j++)
        {
            if(arr[j][i]==1)
            cnt++;
        }
        if(cnt==m)
        c.pb(i);
    }
    if(r.size()==0 || c.size()==0)
    cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<"\n";
        int arr2[m][n];
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        arr2[i][j]=0;

        // for(int i=0;i<c.size();i++)
        // cout<<c[i]<<" ";
        // cout<<"\n";
        for(int i=0;i<r.size();i++)
        {
            for(int j=0;j<c.size();j++)
            {
                arr2[r[i]][c[j]]=1;
                
            }

        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr2[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}



