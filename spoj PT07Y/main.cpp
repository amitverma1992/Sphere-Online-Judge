#include <bits/stdc++.h>

using namespace std;
int flag=0;

int vis[10000 + 5];
int n,m;
vector<vector<int> > arr(n + 5, vector <int>(0,0));
void dfs(int v){
   flag++;

vis[v]=1;
if(!arr[v].empty())
for(int i=0;i!=arr[v].size();i++){

    if(arr[v][i] && vis[arr[v][i]]==0){
        dfs(arr[v][i]);
    }
}
}

int main()
{

    cin >> n>>m;

    arr.clear();
    arr.resize(n+5,vector<int>(0,0));
    memset(vis,0,sizeof vis);
    int s,d;
    for(int i=1;i<=m;i++){
        cin >>s>>d;
        arr[s].push_back(d);
    }
    flag=0;
    if( n != m+1){
        cout <<"NO"<<endl;
        return 0;
        }
    else
        dfs(1);

    if(flag!=n)
        cout << "NO"<<endl;
    else
        cout <<"YES"<<endl;


    return 0;
}
