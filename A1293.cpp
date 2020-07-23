#include <bits/stdc++.h>
#define ll long long
using namespace std;
int binarySearch(ll arr[], int l, int r, int x) 
{
    if (r >= l)
    { 
        int mid = (r + l) / 2; 
        
        if (arr[mid] == x) 
            return mid; 
        
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        
        return binarySearch(arr, mid + 1, r, x); 
    }
    
    return -1; 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s,k;
        cin>>n>>s>>k;
        ll arr[k];
        for(int i=0;i<k;i++)
            cin>>arr[i];
        sort(arr,arr+k);
        int x=binarySearch(arr,0,k-1,s);
        if(x==-1)
            cout<<"0"<<"\n";
        else
        {
            ll c=1;
            ll i,j,y=LONG_MAX,z=LONG_MAX;
            for(i=x-1;i>=0;i--)
            {
                if((arr[x]-arr[i])==c){
                c++;
                continue;}
                else break;
            }
            c=1;
            for(j=x+1;j<k;j++)
            {
                if((arr[j]-arr[x])==c){
                    c++;
                continue;}
                else break;
            }
            if(i==-1 && arr[0]>1)
            y=x+1;
            else if(i>=0)
            y=x-i;

            if(j==k && arr[k-1]<n)
            z=k-x;
            else if(j<k)
            z=j-x;

            cout<<min(y,z)<<"\n";
        }
        
    }
    return 0;
}