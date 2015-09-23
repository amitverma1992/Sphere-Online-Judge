#include <bits/stdc++.h>

using namespace std;
int dp[6200][6200];
int solve(string str,int s,int e){
    if(s>e)
        return 0;
    if(dp[s][e]!=-1)
        return dp[s][e];
    if(str[s]==str[e])
    return dp[s][e]=solve(str,s+1,e-1);
    else{
        return dp[s][e]=min(solve(str,s+1,e),solve(str,s,e-1)) + 1;
    }
}
int main()
{
    int tc;
    cin >> tc;
    string str;
    while(tc--){
        cin >> str;
        int n= str.size();
        for(int i=0;i<n;i++)
            dp[i][i]=0;


        int k;
      for(int i=2;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            k=j+i-1;
            if(str[j]!=str[k]){

                dp[j][k]= min(dp[j][k-1], dp[j+1][k]) + 1;
            }
            else
                dp[j][k]=dp[j+1][k-1];
        }
      }
      cout << dp[0][n-1]<<endl;




    }
    return 0;
}
