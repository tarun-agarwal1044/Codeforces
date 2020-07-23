#include <bits/stdc++.h>
#define ll long long
using namespace std;
int sgn(int v) {
  if (v < 0) return -1;
  if (v > 0) return 1;
  return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        ll sum=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;)
        {
            int m=arr[i];
            int j=i;
            while(j<n && sgn(arr[i])==sgn(arr[j]))
            {
                m=max(arr[j],m);
                j++;
            }
            sum+=m;
            i=j;
        }
        cout<<sum<<"\n";
    }   
    return 0;
}