#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int arr[n+1]={0};
        for(int i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            arr[temp]++;
        }
        ll d=0,s=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
            d++;
            else if(arr[i]>1)
            {
                if(arr[i]>s)
                {
                    if(s==0)
                    s=arr[i];
                    else
                    {
                        s=arr[i];
                        d++;
                    }
                    
                }
                else
                d++;
                
            }
        }
        if(n==1)
        cout<<"0"<<"\n";
        else if(s==0 || d==0)
        cout<<"1"<<"\n";
        else if(d>=s)
        cout<<s<<"\n";
        else if(d<s && (s-d)==1)
        cout<<d<<"\n";
        else
        cout<<(d+1)<<"\n";
    }   
    return 0;
}