#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> d;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            d.pb(i);
            d.pb(n/i);
            //cout<<"test";
        }
    }
    ll ans;
    sort(d.begin(),d.end(),greater<ll>());
    //cout<<d[0];
    for(ll i=0;i<d.size();i++)
    {
        //cout<<"test";
        int flag=0;
        for(ll j=2;j<=sqrt(d[i]);j++)
        {
            if(d[i]%(j*j)==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ans=d[i];
            break;
        }
    }
    cout<<ans<<"\n";
 
 
    return 0;
}