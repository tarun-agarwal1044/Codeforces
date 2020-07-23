#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
		cin>>arr[i];
	int ans=1;
	
	int r[n],l[n];
    for(int i=0;i<n;i++)
    {
        l[i]=1;
        r[i]=1;
    }
	for (int i=n-2;i>=0;i--)
    {
		if(arr[i+1]>arr[i])
        r[i]=r[i+1]+1;
		ans=max(ans,r[i]);
	}
	
	for(int i=1;i<n;i++)
    {
		if(arr[i-1]<arr[i])
        l[i]=l[i-1]+1;
		ans=max(ans,l[i]);
	}
	
	for(int i=0;i<n-2;i++)
    {
		if(arr[i]<arr[i+2])
        ans=max(ans,(l[i]+r[i+2]));
	}
    
	cout<<ans<<"\n";
    return 0;
}
