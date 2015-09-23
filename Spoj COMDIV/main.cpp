#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){

    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main()
{
    int tc;
    scanf("%d", &tc);
    int a,b;
    while(tc--){
            scanf("%d%d", &a,&b);
            long long int n= gcd(a,b);
            map<long long,long long> m;
            for(int i=2;i<=sqrt(n);i++){
                while(n%i==0){
                    m[i]++;
                    n/=i;
                }
            }
            if(n>1)
                m[n]++;

           long long int res=1;
           map<long long,long long> :: iterator it;
           for(it=m.begin();it!=m.end();it++){
            res= res * (it->second + 1);
           }
           printf("%lld\n", res);



    }
    return 0;
}
