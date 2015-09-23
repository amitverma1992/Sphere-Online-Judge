#include <bits/stdc++.h>

using namespace std;
int a[190][190];
int posx[]={0,-1,0,1};
int posy[]={-1,0,1,0};
 int n,m;
void bfs(vector<pair<int,int> > b){
    queue <pair<int,int> >que;
    for(int k=0;k<b.size();k++){
        que.push(make_pair(b[k].first,b[k].second));
    }

    int nx,ny;
    while(!que.empty()){
        pair <int,int> s=que.front();
        que.pop();
        int d= a[s.first][s.second] + 1;
        for(int l=0;l<4;l++){
                nx= s.second + posx[l];
                ny=s.first + posy[l];
               // cout <<nx<<" "<<ny<<" "<<a[nx][ny]<<endl;

            if(d<a[ny][nx] && nx<m && nx>=0 && ny<n && ny>=0){
                a[ny][nx]=d;
            que.push(make_pair(ny,nx));}
        }
    }

}

int main()
{
    int tc;

    cin >>tc;
    while(tc--){
            vector <pair<int,int> > b;
            cin >> n>>m;
            char x;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin >> x;
                    if(x=='1'){
                        a[i][j]=0;
                        b.push_back(make_pair(i,j));
                    }
                    else{
                        a[i][j]=100000;
                    }

                }
            }
            //for(int i=0;i!=b.size();i++)
                bfs(b);

                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        cout << a[i][j]<<" ";

                    }
                    cout <<endl;
                }



    }



    return 0;
}
