#include <bits/stdc++.h>

using namespace std;

long long dp[100005][4];
int main()
{
    int n;
    int k=1;
    while(1){
        cin >> n;
        if(n==0)
            break;
            for(int i=0;i<n;i++){
                for(int j=0;j<3;j++)
                    cin >> dp[i][j];
            }
            dp[0][2]+=dp[0][1];
            dp[1][0]+=dp[0][1];
            dp[1][1]+=min(dp[0][1],min(dp[0][2],dp[1][0]));
            dp[1][2]+=min(dp[0][1],min(dp[0][2],dp[1][1]));
                for(int i=2;i<=n-1;i++){
                    for(int j=0;j<3;j++){
                        if(j==0)
                            dp[i][j]+=min(dp[i-1][j],dp[i-1][j+1]);
                        else if(j==2)
                            dp[i][j]+=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                        else
                            dp[i][j]+=min(dp[i-1][j],min(dp[i-1][j-1],min(dp[i-1][j+1],dp[i][j-1])));


                    }
                }



                cout <<k<<". "<< dp[n-1][1]<<endl;
                k++;

    }


    return 0;
}
