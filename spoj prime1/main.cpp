#include <bits/stdc++.h>

using namespace std;
#define sz 32000
bool prime[sz];


int main()
{
    memset(prime,1,sizeof prime);

    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<32000;i++){
        if(prime[i]){
        for(int j=2;i*j<sz;j++){
            prime[i*j]=0;
        }
        }
    }


    int tc;
    cin >> tc;
    long long first,second;

   while(tc--){

       cin >>first>>second;

       for(int i=first;i<=second;i++){
        bool p= (i!=1);
        for(int j=2; j*j <=i;j++){
            if(prime[j]){
                if(i%j==0){
                    p=0;
                    break;
                    }

            }
        }
        if(p)
            cout <<i<<endl;
       }



    }
    return 0;
}
