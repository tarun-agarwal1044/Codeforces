#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,d;
    cin>>n>>d;
    pair<ll,ll> p[n];
    for(int i=0;i<n;i++)
        cin>>p[i].first>>p[i].second;
    sort(p,p+n);
    ll ans=-1,ff=0;
    int i,j=0;
    for(i=0;i<n;i++){
		if(p[i].first-p[j].first<d){
		ff+=p[i].second;
		ans=max(ans,ff);
		}
		else
        {
			ff-=p[j++].second;
			i--;
		}
	}
    cout<<ans;
    return 0;
}