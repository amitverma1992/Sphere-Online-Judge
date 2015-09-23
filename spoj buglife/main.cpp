#include <bits/stdc++.h>

using namespace std;
int f=0;
int n;
vector<int> a[2005];
int col[2005];
int dfs(int vr){
    int x;
    int ret=1;
    for(int i=0;i!=a[vr].size();i++){
        x=a[vr][i];
        if(col[x]==col[vr])
            return 0;
        if(col[x]==-1){
            col[x]=1-col[vr];
            ret= ret && dfs(x);
        }
    }
    return ret;
}
int main()
{
    int tc;
    cin >> tc;
    int e;
    for(int t=1;t<=tc;t++){
            f=0;
            cin >> n>>e;
            for(int i=0;i<=n;i++){
                a[i].clear();
                col[i]=-1;
                }
            int s,d;
            for(int i=0;i<e;i++)
            {
                cin >>s>>d;
                a[s].push_back(d);
                a[d].push_back(s);
            }
            int f=1;
            for(int i=1;i<=n;i++){
                if(col[i]==-1){
                    col[i]=1;
                f= f && dfs(i);}
           }
           printf("Scenario #%d:\n",t);
           if(!f){
            printf("Suspicious bugs found!\n");
           }
           else
            printf("No suspicious bugs found!\n");
    }
    return 0;
}
