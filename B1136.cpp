#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a,b;
    a=n-k;
    b=k-1;
    //cout<<min(a,b)<<"   "<<max(a,b)<<"\n";
    int ans=n+min(a,b)*2+max(a,b)+(n+1);
    cout<<ans;
    return 0;
}