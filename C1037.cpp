#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    //cout<<a<<" "<<b<<"\n";
    int ans=0;
    for(int i=0;i<n;)
    {
        if(i<n && a[i]!=b[i] && a[i+1]!=b[i+1] && (a[i]==b[i+1] && a[i+1]==b[i]))
        {
            ans++;
            i+=2;
        }
        else if(a[i]!=b[i])
        {
            ans++;
            i++;
        }
        else
        i++;
    }
    cout<<ans<<"\n";
    return 0;
}