#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

ll Divisors(ll n) 
{ ll c=0;
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
               c++;
  
            else
                c+=2;
        } 
    }
    return c; 
} 
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll min=LONG_MAX;
    ll g=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        g=gcd(g,arr[i]);
    }
    ll ans=Divisors(g);
    cout<<ans;
    return 0;
}