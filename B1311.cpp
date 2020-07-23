#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,m,x,flag=0;
        cin>>n>>m;
        int arr[n];
        int f[101]={0};
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<m;i++)
        {
            cin>>x;
            f[x-1]++;
        }
        int j;
        for(int i=0;i<n-1;i++)
        {
            if(f[i]==0)
            continue;
            else
            {
                j=i;
                while(j<n && f[j]==1)
                j++;
                sort(arr+i,arr+j+1);
                i=j;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
                {
                    flag=1;
                    break;
                }
        }
        if(flag==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}