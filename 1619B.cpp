#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n, ans=0;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int x1= (int)sqrt(n)+ (int)cbrt(n);
    bool flag=true;
    int z=1;
    while(flag)
    {
        if(pow(z,6)<n) ans++;
        z++;
        if(pow(z,6)>n) flag=false;
    }
    cout<<x1-ans<<endl;
}


int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}




