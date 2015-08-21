#include <bits/stdc++.h>

using namespace std;
map <int ,long long> dp;

long long solve (int n){
if(n==0)
    return 0;
if(dp[n]!=0)
    return dp[n];
long long sum= solve(n/2) + solve(n/3) + solve(n/4);

if(sum>n)
    dp[n]=sum;
else
    dp[n]=n;

return dp[n];
}

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        cout << solve(n) <<endl;
    }

    return 0;
}
