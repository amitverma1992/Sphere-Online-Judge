#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    long long n;
    while(tc--){
        cin >> n;
        long long power=0;
        int flag=0;
        for(long long i=2;i*i<=n;i++){
            power=0;
            while(n%i==0){
                power++;
                n=n/i;
            }
            if(power%2==1 && i % 4==3){
                flag=1;
                break;
            }

        }
        if(n%4==3)flag=1;
        if(!flag)
            cout <<"Yes"<<endl;
        else
            cout <<"No"<<endl;

    }
    return 0;
}
