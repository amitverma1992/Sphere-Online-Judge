#include <bits/stdc++.h>

using namespace std;
#define MAX 10000

int a[MAX + 10][MAX+10];

int main()
{
    int tc;
    cin>> tc;
    a[0][0]=0;

    int x=0,y=0;
    while(x<=10002 || y<=10002){
        a[x+1][y+1]=a[x][y]+1;
        a[x+2][y]=a[x+1][y+1] +1;
        a[x+3][y+1]=a[x+2][y] + 1;
        a[x+2][y+2]=a[x+3][y+1] + 1;
        x+=2;
        y+=2;


    }
    int j,k;
    while(tc--){
        cin>>j>>k;
        if(a[j][k]!=0)
            cout <<a[j][k]<<endl;
        else if (j==0 && k==0)
        cout << 0<<endl;
        else
            cout << "No Number"<<endl;
    }
    return 0;
}
