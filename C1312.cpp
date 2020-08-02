#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       ll arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];

       int flag=0,index;
       map<int,int> m;
        for(int i=0;i<n;i++)
        {
            index=0;
            while(arr[i]>0)
            {
                if(arr[i]%k>1)
                {
                    flag=1;
                    break;
                }
                if(arr[i]%k==1)
                {
                    if(m[index]==0)
                    m[index]=1;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                arr[i]=arr[i]/k;
                index++;
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}