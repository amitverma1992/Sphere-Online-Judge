#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007
unsigned long long mul(unsigned long long a[][2], unsigned long long b[][2]){
    unsigned long long res[2][2];
    memset(res,0,sizeof res);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                res[i][j]=(res[i][j]+(a[i][k] * b[k][j])) % mod;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j]=res[i][j];
        }
    }
}
unsigned long long p(int num){
unsigned long long fib[2][2] = { {1 , 1} , { 1 , 0}},temp[2][2] = { {1 , 0 } , { 0 , 1}};
while(num){
        if(num & 1)
        mul(temp,fib);
    mul(fib,fib);
    num>>=1;
}

return temp[0][1];
}

int main()
{
    int t;
    cin >> t;
    int n,m;
    while(t--){
        cin >> n>>m;
        cout <<(p(m+2)-p(n+1)+mod)% mod<<endl;
    }
    return 0;
}
