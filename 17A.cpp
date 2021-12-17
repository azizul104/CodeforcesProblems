#include <bits/stdc++.h>

using namespace std;
int p[1000];
int chPrime(int n) {
    int i;
    for(i=2; i<=(int)sqrt(n); i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}
void storePrime(int n) {
    int i, j = 0;
    for(i=2; i<n; i++) {
        if(chPrime(i)){
            p[j++] = i;
        }
    }
}

int main()
{
    int n, k, i, j, c=0;
    cin >> n >> k;
    storePrime(1000);
    for(i=2; i<=n; i++) {
        if(chPrime(i)==0)
            continue;
        for(j=0; p[j]<i; j++) {
            if(p[j]+p[j+1]+1 == i){
                c++;
                break;
            }
        }
    }
    if(c < k)
        cout << "NO" <<endl;
    else
        cout << "YES" <<endl;
    return 0;
}



