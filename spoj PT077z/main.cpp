#include <bits/stdc++.h>

using namespace std;
int arr[10000 + 5][10000 + 5]={0};
int check[10000 + 5];

int n;

int dfs(int x){
    int count1=0;
    check[x]=1;
    for(int i=1;i<=n;i++){
        if(arr[x][i]==1 && check[i]==0){

           int c= dfs(i) ;
            count1++;
           count1= count1 + c;
        }

    }
    return count1;

}

int main()
{
    cin >> n;
    memset(arr,0,sizeof arr);
    memset(check,0,sizeof check);

    int s,d;
    for(int i=1;i<=n-1;i++){
            cin >> s>>d;
            arr[s][d]=1;
            }



                int length=dfs(1);
                cout << length<<endl;



    return 0;
}
