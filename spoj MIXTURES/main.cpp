#include <bits/stdc++.h>

using namespace std;

int a[100],sum[100][100],dp[100][100];
int solve(int ai,int bi){
    if(ai==bi){
       return 0;
    }
    if((ai+1)==bi)
        return a[ai] * a[bi];
        int &r= dp[ai][bi],c;
        if(r==-1){
            for(int i=ai;i+1<=bi;i++){
                c= sum[ai][i] * sum[i+1][bi] + solve(ai,i) + solve(i+1,bi);
            if(r==-1 || c<r)r=c;
            }
        }
        return r;
}
int main()
{
    int n;
    while(scanf("%d", &n)==1){
        for(int i=0;i<n;i++)
             scanf("%d",&a[i]);
            for(int i = 0;i < n;++i) sum[i][i] = a[i];
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    sum[i][j]=sum[i][j-1] + a[j];
                    if(sum[i][j]>=100)
                        sum[i][j]-=100;
                }

            }
            memset(dp,-1,sizeof dp);
             printf("%d\n",solve(0,n-1));


    }

    return 0;
}
