#include <bits/stdc++.h>
using namespace std;

int main()
  {
      int t;
      cin>>t;
      int i,j,a[6];

      for ( i=0; i<t; i++)
      {
          for(j=0;j<7;j++){
            cin>>a[j];

          }
          cout<<a[0]<<" "<<a[1]<<" "<<a[6]-a[0]-a[1]<<" ";
      }
  }
