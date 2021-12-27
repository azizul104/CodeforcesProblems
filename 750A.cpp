#include<bits/stdc++.h>

using namespace std;
int main()
{
        int n,k,i,mi=0;
    
        cin>>n>>k;
        
        for(i=1;i<=n;i++){
            mi+=i*5;
            if(mi>240-k){
                
                cout<<i-1;
                return 0;
            }
        }
        cout<<i-1;
        return 0;
}
