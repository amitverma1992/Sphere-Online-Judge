#include <bits/stdc++.h>

using namespace std;
int b[105][505];
int main()
{
    int n,m;
    while(1){
        vector <pair <int,int> > v;
        cin >> n>> m;
        int a[m+1];
        memset(a,0,sizeof a);
        if(n==0 && m==0)
            break;
            int p,f;
        for(int i=0;i<m;i++){
            cin >> p>>f;
            v.push_back(make_pair(p,f));
        }
        memset(b,0,sizeof b);
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                    if(i==0 || j==0)
                    b[i][j]=0;
                    else if(v[i-1].first<=j){
                if(b[i-1][j]< v[i-1].second + b[i-1][j-v[i-1].first]){

                b[i][j]=v[i-1].second + b[i-1][j-v[i-1].first];
                }else{
                    b[i][j]=b[i-1][j];
                    }
                }
            else
                b[i][j]=b[i-1][j];
            }
        }
        int mx=b[m][n];
        int fl=0;
        int j;

       int i=m;
        for( j=n-1;j>=0;j--){
                        if(b[i][j]!=mx){
                            fl=1;
                            break;
                        }

                }
                if(j==-1)
                    j=n;


        cout << j+1<<" "<<mx<<endl;




    }

    return 0;
}
