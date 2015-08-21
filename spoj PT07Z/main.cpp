#include <bits/stdc++.h>

using namespace std;
vector <int> arr[10002];


void dfs(int v,int par,int dis[]){
    dis[v]=dis[par] + 1;
    if(!arr[v].empty()){
        for(int i=0;i!=arr[v].size();i++){
            if(arr[v][i] && dis[arr[v][i]]==0)
                dfs(arr[v][i],v,dis);
        }
    }

}
int main()
{
    int n;
    cin >>n;
    int s,d;
    int dis[n+1];
    int dis2[n+1];
    memset(dis,0,sizeof dis);
    memset(dis2,0,sizeof dis2);
    for(int i=1;i<=n-1;i++){
        cin >>s>>d;
        arr[s].push_back(d);
        arr[d].push_back(s);
    }
    dfs(1,1,dis);
    int maxd= max_element(dis+1,dis+n+1)-dis;
    dfs(maxd,maxd,dis2);
    int maxd2=*max_element(dis2 + 1, dis2+n+1);
    cout <<maxd2-1<<endl;





    return 0;
}
