#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll r,g,b;
    cin>>r>>g>>b;
    cout<<min((r+g+b)/3,min(r+b,min(r+g,g+b)));   
    return 0;
}