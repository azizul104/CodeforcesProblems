#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    char arr[50];
    cin>>t;

    while(t--)
    {
        int ce=0,cn=0;
        cin>>arr;
        int arrSize = sizeof(arr)/sizeof(arr[0]);
        for(i=0;i<arrSize;i++)
        {
            
            if(arr[i]=='N'){
                cn++;
            }
        }
        if(cn==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
