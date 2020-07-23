#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int ans[n];
        int x=0;
        if(n%2!=0)
        {
            for(int i=n/2;i>=0;i--)
            {
                ans[x]=arr[i];
                x+=2;
            }
            x=1;
            for(int i=n/2+1;i<n;i++)
            {
                ans[x]=arr[i];
                x+=2;
            }
        }
        else
        {
            for(int i=n/2-1;i>=0;i--)
            {
                ans[x]=arr[i];
                x+=2;
            }
            x=1;
            for(int i=n/2;i<n;i++)
            {
                ans[x]=arr[i];
                x+=2;
            }

        }
        for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
        
    }
    return 0;
}