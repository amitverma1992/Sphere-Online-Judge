#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000000
bool prime[MAX+3]={0};

int sqrt2=sqrt(32000);


void seive(){

for(int i=2;i<=sqrt2;i++){
    if(prime[i]==0){
        for(int j=i*i;j<=32000;j+=i)
            prime[j]=1;
    }
}
}

void segmentsieve(long long a,long long b){
    for(int i=a;i<=b;i++){
        if(prime[i]==0){
            for(int j=2; j*j<=i;j++){
                if(prime[j]==0){
                    if(i%j==0){
                        prime[i]=1;
                        break;
                    }
                }
            }
        }
    }


}

void display(int first,int second){
    for(int i=first;i<=second;i++){
        if(prime[i]==0)
            cout<<i<<endl;
    }

}

int main()
{
    prime[0]=1;
prime[1]=1;
    seive();
    int tc;
    cin >>tc;
    long long fir,sec;
    while(tc--){
        cin >>fir>>sec;
        if(sec<32000){
            display(fir,sec);
        }
        else{
            segmentsieve(fir,sec);
            display(fir,sec);
        }
    }

    return 0;
}
