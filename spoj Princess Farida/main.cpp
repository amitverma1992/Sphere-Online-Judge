#include <bits/stdc++.h>

using namespace std;
long long arr[10001];
long long dp[10001];
int main()
{
    int tc;
    cin >> tc;
    int n;
    for(int t=1;t<=tc;t++){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >>arr[i];
        }

        dp[0]=arr[0];
        dp[1]=max(dp[0],arr[1]);
        for(int i=2;i<n;i++){
                dp[i]= max(dp[i-1], dp[i-2] + arr[i]);

        }

           printf("Case %d: %lld\n", t,dp[n-1]);
    }


    return 0;
}
