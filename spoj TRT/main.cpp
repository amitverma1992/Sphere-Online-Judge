#include <bits/stdc++.h>

using namespace std;
int a[2000 + 5];
int dp[2000 + 5][2000 + 5];
int solve(int s,int e,int d){
    if(s>e)
        return 0;
    if(dp[s][e]!=-1)
        return dp[s][e];
    return (dp[s][e]=max(solve(s+1,e,d+1)+ a[s]*d , solve(s,e-1,d+1) + a[e]*d));
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >>a[i];
        memset(dp,-1,sizeof dp);
        cout << solve(0,n-1,1)<<endl;

    return 0;
}
