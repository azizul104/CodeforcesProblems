#include <bits/stdc++.h>

using namespace std;
int a[100001],b[100001];

int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int n,m,i,j,c;
    cin>>n;


    for(i=0; i<n; i++)
        cin>>a[i];
    c=0;
    for(i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            if(gcd(a[i],a[i+1])==1)
                b[c++]=a[i];
            else
                b[c++]=a[i],b[c++]=1;
        }
    }
    b[c++]=a[n-1];

    cout<<c-n<<endl;
    for(i=0; i<c; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}



