#include <bits/stdc++.h>

using namespace std;
int prime[10001];

void seive(){
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i<=sqrt(10000);i++){
            if(prime[i]==0)
        for(int j=i*i;j<=10000;j+=i)
        prime[j]=1;
    }
}
void toarray(int dig[],int num){
    int i=3;
    while(num){
        dig[i]= num%10;
        num/=10;
        i--;
    }


}
int todigit(int dig[]){
    int tem=0;
    for(int i=0;i<=3;i++){
        tem=10* tem + dig[i];
    }

    return tem;
}


int main()
{

    memset(prime,0,sizeof prime);
    seive();
    int tc;
    cin >> tc;
    int a,b;
    int vis[10009];
    int digit[4];
    int temp;
    while(tc--){
            cin >>a>>b;
            memset(vis,-1,sizeof vis);
            queue<int> que;
            vis[a]=0;
            que.push(a);
            int num;
            while(!que.empty()){
                 num= que.front();
                 que.pop();
                 for(int d=3;d>=0;d--){
                    toarray(digit,num);

                    for(int j=0;j<=9;j++){
                            if(d==0 && j==0)
                            continue;
                        digit[d]=j;
                        temp=todigit(digit);

                        if(!prime[temp] && temp>=1000 && temp<=9999 && vis[temp]==-1){
                            vis[temp]=vis[num] + 1;
                            que.push(temp);
                        }
                    }
                 }
            }
            vis[b]==-1?cout <<"Impossible"<<endl : cout <<vis[b]<<endl;




    }


    return 0;
}
