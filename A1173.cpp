#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x,y,z;
    cin>>x>>y>>z;
    if(z==0)
    {
        if(x>y)
        cout<<"+";
        else if(x<y)
        cout<<"-";
        else if(x==y)
        cout<<"0";
        else
        cout<<"?";
    }
    else
    {
        if(z+x>y && x>y+z)
        cout<<"+";
        else if(x+z<y && z+y>x)
        cout<<"-";
        else
        cout<<"?";
    }
    return 0;
}