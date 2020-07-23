#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        --l;
        k=k%(r-l);
		rotate(s.begin()+l,s.begin()+r-k, s.begin()+r);
    }
    cout<<s;
    return 0;
}