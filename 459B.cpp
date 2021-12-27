#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,diff,max_value=0,i,min_value=0,ans=0;
    
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[n-1])
    {
        if(n%2==0)
            ans=(n/2*(n-1));
        else
            ans=(n/2*n);
    }
    else
    {
        for(i=0; i<n; i++)
        {

            if(a[i]==a[0])
                min_value++;
            if(a[i]==a[n-1])
                max_value++;
        }
        ans=min_value*max_value;

    }
    diff=a[n-1]-a[0];
    cout<<diff<<" "<<ans;
    return 0;
}
