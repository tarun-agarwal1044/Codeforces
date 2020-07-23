#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll str,in,exp;
        cin>>str>>in>>exp;
        ll a=max(0LL,(exp + in - str + 2) / 2);
        ll ans=max(0ll,exp-a+1);
        cout<<ans<<"\n";
    }
    return 0;
}