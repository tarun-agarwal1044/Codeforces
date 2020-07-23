#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b && a%b!=0)
        cout<<(b-a%b)<<"\n";
        else if(a<b)
        cout<<b-a<<"\n";
        else
        cout<<"0"<<"\n";
    }
    return 0;
}