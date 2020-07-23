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
        int arr1[n];
        int arr2[n];
        int one=-1;
        int n_one=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            if(one==-1 && arr1[i]==1)
            one=i;
            if(n_one==-1 && arr1[i]==-1)
            n_one=i;
        }
        for(int i=0;i<n;i++)
        cin>>arr2[i];
        if(arr1[0]!=arr2[0])
        cout<<"NO"<<"\n";
        else
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(arr1[i]==arr2[i])
                continue;
                else if(arr1[i]<arr2[i])
                {
                    if(one!=-1 && one<i)
                        continue;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(n_one!=-1 && n_one<i)
                    continue;
                    else
                    {
                        flag=1;
                        break;
                    }
                }  
            }
            if(flag==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}