#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[10][10]={0};
    for(int i=0;i<10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            arr[i][j-1]=(i*j)%10;
        }
    }
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll sum=0;
        ll x;
        ll l=m%10;
        ll z=0;
        x=n/m;
        ll q=x/10;
        ll r=x%10;
        for(int i=0;i<10;i++)
            z=z+arr[l][i];
        sum=sum+z*q;
        for(int i=0;i<r;i++)
            sum+=arr[l][i];
        cout<<sum<<"\n";
    }
    return 0;
}