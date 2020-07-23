#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char c;
                cin>>c;
                if(c!='1')
                cout<<c;
                else
                cout<<"5";
            }
            cout<<"\n";
        }
    }
    return 0;
}