#include <bits/stdc++.h>

using namespace std;
int P[505];
int W[505];
int main()
{

    int tc;
    cin >>tc;
    int e,f,n;
    while(tc--){

        cin >>e>>f;
        int maxw=f-e;

        cin >> n;
        for(int i=0;i<n;i++){
            cin >>P[i];
            cin >>W[i];
        }
        int dp[maxw+1];
        dp[0]=0;
        for(int i=1;i<=maxw;i++)
            dp[i]=INT_MAX;
        for(int i=1;i<=maxw;i++){
            for(int j=0;j<n;j++){
                if(W[j]<=i && dp[i-W[j]]!=INT_MAX && dp[i]>=P[j] + dp[i-W[j]] )
                dp[i]=P[j] + dp[i-W[j]];
            }
        }

        if(dp[maxw]==INT_MAX)
        cout <<"This is impossible."<<endl;
        else
            cout<<"The minimum amount of money in the piggy-bank is "<<dp[maxw]<<"."<<endl;




    }

    return 0;
}
