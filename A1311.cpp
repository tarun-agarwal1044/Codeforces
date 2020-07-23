#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b;
    cin>>n;
    while(n--!=0)
    {
        cin>>a>>b;
        ll x=abs(a-b);
        if(a>b)
        {
            if(x%2==0)
            cout<<"1"<<"\n";
            else
            cout<<"2"<<"\n";
        }
        else if(a<b)
        {
            if(x%2==0)
            cout<<"2"<<"\n";
            else
            cout<<"1"<<"\n";
        }
        else
        cout<<"0"<<"\n";
        
    }
    return 0;
}