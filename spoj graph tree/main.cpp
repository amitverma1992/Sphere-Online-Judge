#include <bits/stdc++.h>

using namespace std;
int g[10000 + 10][10000 + 10];
bool vt[10000 + 10];
int n,m;
bool dfs(int v,int parent)
{
    vt[v]=true;
    for(int i=1; i<=n; i++)
    {
        if(g[v][i]==1 && vt[i]==0)
        {
            if(dfs(i,v))
                return 1;
        }
        else if(i!=parent)
            return 1;
    }
    return 0;
}
int main()
{


    cin >> n;
    cin >>m;
    int h,v;
    for(int i=0; i<m; i++)
    {
        cin >>h>>v;
        g[h][v]=1;
    }
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(!vt[i])
            if(dfs(i,0))
               {
                   flag=1;
                   break;
               }
            else
                flag=0;
    }

    if(flag==1)
        cout <<"YES";
    else
        cout <<"NO";





    return 0;
}
