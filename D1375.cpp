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

int mex(int arr[],int n)
{
    int v[1005];
    
	for(int i=0;i<=n;i++)
    v[i]=0;

	for(int i=0;i<n;i++)
    v[arr[i]]++;

	for(int i=0;i<=n;i++)
    if(v[i]==0)
    return i;
    return n;
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int arr[n];
		for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
		while(1)
		{
            
			int x=mex(arr,n);
			if(x<n)
            {
                ans.pb(x+1);
                arr[x]=x;
            }
			else
			{
				int j=0;
				while(j<n && arr[j]==j)
                j++;

				if(j==n)
                break;

				ans.pb(j+1);
                arr[j]=x;
			}
		}
		cout<<ans.size()<<"\n";
        if(ans.size()>0)
        {
		    for(int i=0;i<ans.size()-1;i++)
            cout<<ans[i]<<" ";
            cout<<ans[ans.size()-1];
        }
        cout<<"\n";
	}
    return 0;
}