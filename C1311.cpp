#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,m;
        string s;
        cin>>n>>m;
        cin>>s;
        int arr[m];
        int f[n]={0};
        int ans[26]={0};
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
            f[0]++;
            if(arr[i]<n)
            {
                f[arr[i]]--;
            }
        }
        int a=0;
        for(int i=0;i<n;i++)
        {
            a+=f[i];
            ans[s[i]-97]+=(a+1);
        }
        for(int i=0;i<26;i++)
            cout<<ans[i]<<" ";  
    }
    return 0;
}