#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n+4];
        for(int i=0;i<n-2;i++){
                cin>>s[i];}
        string res;
        res=s[0];
        int cnt=0;
        for(int i=1;i<n-2;i++)
        {
            int z=res.size()-1;
            if(res[z]==s[i][0])
            {
                res+=s[i][1];
            }
            else
            {
                cnt=1;
                res+=s[i];
            }
        }
        if(cnt==0)res+='a';
        cout<<res<<endl;
    }
}
