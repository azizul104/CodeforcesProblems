#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
int main()
{
    int i,j;
    arr[0]=arr[1]=1;
    for(i=2; i*i<=10000000; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=10000000; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int n,t;
    cin>>n;
    long long int in;
    for(int i=0; i<n; i++)
    {
        cin>>in;
        t=sqrt(in);
        if(t==sqrt(in)&&arr[t]==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;}
