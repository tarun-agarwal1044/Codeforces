#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> f;
    vector<int> s;
    vector<int> t;
    int ne=0;
    for(int i=0;i<n;i++)
       {
            cin>>arr[i];
            if(arr[i]<0)
                ne++;
       }
    int flag1=0,flag2=0;
    --ne;
    bool x;
    if(ne%2==0)
    x=true;
    else
    x=false;
    for(int i=0;i<n;i++)
    {
        if(flag1==0 && arr[i]<0)
        {
             f.push_back(arr[i]);
             flag1=1;
        }
        else if(arr[i]==0 || x==false){
            t.push_back(arr[i]);
            if(arr[i]<0)
            x=true;
        }
        else
            s.push_back(arr[i]);

    }
    cout<<f.size()<<" ";
    for(int i=0;i<f.size();i++)
        cout<<f[i]<<" ";
    cout<<"\n";
    cout<<s.size()<<" ";
    for(int i=0;i<s.size();i++)
        cout<<s[i]<<" ";
    cout<<"\n";
    cout<<t.size()<<" ";
    for(int i=0;i<t.size();i++)
        cout<<t[i]<<" ";
    return 0;
}