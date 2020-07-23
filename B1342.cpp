#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        string ans="";
        cin>>s;
        int l=s.length();
        if(l<=2)
        cout<<s<<'\n';
        else
        {
            int i;
            for(i=0;i<l-1;i++)
            if(s[i]!=s[i+1])
            break;
            if(i==(l-1))
            cout<<s<<"\n";
            else
            {
                char a=s[0];
                ans=ans+a;
                for(int i=1;i<2*l;i++)
                {
                    if(ans[i-1]=='0')
                    ans+='1';
                    else
                    ans+='0';
                }
                cout<<ans<<"\n";
            }
            
            
        }
        
    }
    return 0;
}