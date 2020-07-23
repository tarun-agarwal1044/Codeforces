#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r[n],b[n];
    for(int i=0;i<n;i++)
        cin>>r[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int r_count=0,b_count=0,c_count=0;
    for(int i=0;i<n;i++)
    {
        if(r[i]==1 && b[i]==1)
            c_count++;
        else if(r[i]==1)
            r_count++;
        else if(b[i]==1)
            b_count++;
    }
    if((r_count==0 && b_count==0) || (r_count==0 && b_count>0))
        cout<<"-1";
    else
    {
        if(r_count>b_count)
            cout<<"1";
        else
        {
            cout<<((b_count/r_count)+1);
        }
        
    }
    return 0;
}