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
    string s;
    cin>>s;
    int n=s.length();
    char arr[n];
    for(int i=0;i<n;i++)
    arr[i]=s[i];

    char x=arr[n-1];
    int a=-1,b=-1;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i]-'0')%2==0 && arr[i]<x)
        {
            a=i;
            break;
        }
        if((arr[i]-'0')%2==0 && arr[i]>x)
        {
            b=i;
        }
    }
    if(a==-1 && b==-1)
    cout<<"-1";
    else if(a!=-1)
    {
        char temp=arr[a];
        arr[a]=arr[n-1];
        arr[n-1]=temp;
        for(int i=0;i<n;i++)
        cout<<arr[i];
    }
    else
    {
        char temp=arr[b];
        arr[b]=arr[n-1];
        arr[n-1]=temp;
        for(int i=0;i<n;i++)
        cout<<arr[i];

    }

    return 0;
}



