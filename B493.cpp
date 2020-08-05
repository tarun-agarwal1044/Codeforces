#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define vi              vector<int>
#define vll             vector<ll>
#define pii             pair<int,int>
#define pll             pair<ll,ll>
#define pb              push_back
#define mp              make_pair

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------//
//convert ll to binary string of 64 bits
// string decToBinary(ll n) 
// { 
//     string ans="";
//     for (ll i = 63; i >= 0; i--) { 
//         ll k = n >> i; 
//         if (k & 1) 
//             ans+='1'; 
//         else
//             ans+='0';
//     }
//     return ans; 
// } 
//-----------------------------------------------------------------------------------------------------------------------------------//
//convert binary string to ll
// ll btod(string s)
// {
//     ll ans=0;
//     int z=0;
//     for(int i=(s.length()-1);i>=0;i--)
//     {
//         if(s[i]=='1')
//         ans+=pow(2,z);
//         z++;
//     }
//     return ans;
// }
//-----------------------------------------------------------------------------------------------------------------------------------//



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    vi f,s;
    int flag=0;
    ll s1=0,s2=0;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            f.pb(x);
            flag=1;
            s1+=x;
        }
        else
        {
            s.pb(abs(x));
            flag=2;
            s2+=abs(x);
        }
    }
    if(s1>s2)
        cout<<"first"<<"\n";
        else if(s1<s2)
        cout<<"second"<<"\n";
        else
        {
            int flag2=0;
            int i=0;
            for(;i<f.size() && i<s.size();i++)
            {
                if(f[i]==s[i])
                continue;
                else if(f[i]>s[i])
                {
                    flag2=1;
                    break;
                }
                else if(f[i]<s[i])
                {
                    flag2=2;
                    break;
                }
            }
            if(flag2==1)
            cout<<"first"<<"\n";
            else if(flag2==2)
            cout<<"second"<<"\n";
            else
            {
                flag==1?cout<<"first\n":cout<<"second\n";
            }
        }
    return 0;
}



