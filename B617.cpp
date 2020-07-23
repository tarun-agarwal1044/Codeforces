#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll arr[n];
    vector<int> p;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            p.push_back(i);
    }
    ll ans=1;
    for(int i=1;i<p.size();i++)
    ans*=(p[i]-p[i-1]);
    if(p.size()==0)
    ans=0;
    if(p.size()==1)
    ans=1;
    cout<<ans;
    
    return 0;
}