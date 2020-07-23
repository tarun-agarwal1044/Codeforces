#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if((a+a)<=b)
        cout<<(x+y)*a;
        else
        cout<<a*abs(x-y)+b*min(x,y);
        cout<<"\n";
    }
    return 0;
}