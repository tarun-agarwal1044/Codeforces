#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll> arr(100001);
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    for(int i=3;i<=100001;i++)
        arr[i]=arr[i-1]+i-1;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char ans[n]={'\0'};
        
        int temp=upper_bound(arr.begin(),arr.end(),k)-arr.begin();
        
        if(arr[temp-1]==k)
        temp--;
        
        ans[n-temp]='b';
        
        k=(k-arr[temp-1]);
        ans[n-k]='b';
        
        for(int i=0;i<n;i++)
        {
            if(ans[i]=='b')
            cout<<'b';
            else
                cout<<'a';
        }
        cout<<"\n";
    }
    
    return 0;
}