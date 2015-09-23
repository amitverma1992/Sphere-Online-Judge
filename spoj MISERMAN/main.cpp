#include <bits/stdc++.h>

using namespace std;
int grid[105][105];
int main()
{
    int n,m;
    cin >> n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>grid[i][j];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<m;j++){
            if(j==0){
                grid[i][j]+=min(grid[i+1][j],grid[i+1][j+1]);
            }
            else if(j==m-1){
                grid[i][j]+=min(grid[i+1][j-1],grid[i+1][j]);
            }
            else{
                grid[i][j]+=min(grid[i+1][j],min(grid[i+1][j-1],grid[i+1][j+1]));
            }
        }
    }
    int mn=grid[0][0];
    for(int i=1;i<m;i++){
        if(mn>grid[0][i])
            mn=grid[0][i];
    }
    cout <<mn<<endl;

    return 0;
}
