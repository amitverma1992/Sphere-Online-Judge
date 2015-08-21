#include <bits/stdc++.h>

using namespace std;
#define SZ 300
int fact_dig[SZ];

int main()
{
    int tc;
    cin >>tc;
    int n;
    while(tc--){
            cin >>n;
        int dig_size=0;
        int carry=0;
        fact_dig[0]=1;
        dig_size=1;
        int prod;
        for(int i=2;i<=n;i++){
           for(int j=0;j<dig_size;j++){
            prod=fact_dig[j]*i + carry;
            fact_dig[j]=prod%10;
            carry=prod/10;
           }

           while(carry){
            fact_dig[dig_size]=carry%10;
            carry=carry/10;
            dig_size++;
           }
        }
        for(int i=dig_size-1;i>=0;i--)
            cout<<fact_dig[i];
        cout <<endl;
    }

    return 0;
}
