#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    int diff[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max=-9999999,index=0;
    for(int i=0;i<n-1;i++)
    {
        int x=arr[i]-arr[i+1];
        if(x>max)
        {
            max=x;
            index=i;
        }
    }
    int ans=max-c;
    if(ans<0)
    cout<<"0";
    else
    cout<<ans;


    return 0;
}