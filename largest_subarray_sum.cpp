#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int max_sum=0,start=0,end=0,sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum=max(a[i],sum+a[i]);
        max_sum=max(max_sum,sum);
    }
    
    cout<<"max subarray sum in array is: "<<max_sum<<endl;
    
    return 0;
}
