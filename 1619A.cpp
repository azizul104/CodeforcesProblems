#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,ans;
    long long int strsize,i,p;
    cin>> t;
    while(t--)
    {
        cin>>s;
        strsize=s.length();

        if(strsize%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            p=strsize/2;
            ans="YES";

            for(i=0; i<p; i++)
            {
                if(s[i]!=s[p+i])
                {
                    ans="NO";
                    //cout<<ans<<endl;
                    break;
                }
            }
            cout<<ans<<endl;
        }

    }
}
