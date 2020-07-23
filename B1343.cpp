#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4!=0)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            int arr[n];
            int k=2;
            for(int i=0;i<n/2;i+=2)
            {
                arr[i]=k;
                arr[i+1]=k+2;
                k+=6;
            }
            int index=0;
            for(int i=n/2;i<n;i+=2)
            {
                arr[i]=arr[(index++)]-1;
                arr[i+1]=arr[(index++)]+1;
            }
            for(int i=0;i<n-1;i++)
            cout<<arr[i]<<" ";
            cout<<arr[n-1]<<"\n";
        }
        
    }
    return 0;
}