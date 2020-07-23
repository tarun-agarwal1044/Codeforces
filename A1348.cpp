#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll p=0,m=0;
        for(int i=0;i<n/2-1;i++)
            p=p+pow(2,i+1);
        p=p+pow(2,n);
        for(int i=n/2-1;i<n-1;i++)
            m=m+pow(2,i+1);
        cout<<abs(m-p)<<"\n";
    }
    return 0;
}