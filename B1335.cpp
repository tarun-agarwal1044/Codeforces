#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        string s="";
        ll temp=a-b;
        int z=97;
        for(ll i=0;i<b;i++)
        s=s+(char)z++;
        z--;
        for(ll i=0;i<temp;i++)
        s=s+(char)z;
        string t=s;
        temp=n/a;
        temp--;
        for(ll i=0;i<temp;i++)
        s=s+t;
        temp=n%a;
        for(ll i=0;i<temp;i++)
        s=s+t[i%a];
        cout<<s<<"\n";
    }   
    return 0;
}