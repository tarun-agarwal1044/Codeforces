#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> d;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            if(s.find(t)==s.end()){
                d.pb(t);
            s.insert(t);
            }
        }
        if(k<d.size())
        cout<<"-1"<<"\n";
        else
        {
            if(d.size()<k)
            {
                while(d.size()!=k)
                d.pb(1);
            }
            cout<<n*k<<"\n";
            while(n--)
            {
                for(int i=0;i<d.size();i++)
                cout<<d[i]<<" ";
            }
            cout<<"\n";
        }
        

    }
    return 0;
}