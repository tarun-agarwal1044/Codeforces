#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t;cin>>t;
    while(t--)
    {
       ll n,k;cin>>n>>k;
       ll arr[n];ll i=0;for(i=0;i<n;i++)cin>>arr[i];
       sort(arr,arr+n);int flag=0;
       int hash[1000]={0};
      // cout<<log(810)/log(9)<<endl;
      //for(i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)continue;
            flag=0;
            while(1)
            {
               // cout<<arr[i]<<endl;
                ll p= log10(arr[i])/log10(k);
               // cout<<p<<" "<<arr[i]<<endl;
              // cout<<p<<endl;
                if(hash[p]==0)
                {
                   // cout<<p<<endl;
                    hash[p]=1;
                    //cout<<arr[i]<<endl;
                    arr[i]=arr[i]-pow(k,p);
                    //cout<<arr[i]<<endl;
                    if(arr[i]<0)
                    {
                        flag=2;break;
                    }
                    if(arr[i]==0)break;
                }
                else 
                {
                    //cout<<"aha"<<endl;
                    flag=2;break;
                }
            }
            if(flag==2){
                flag=3;break;
            }
        }
        if(flag==3)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}