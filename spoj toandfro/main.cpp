#include <bits/stdc++.h>

using namespace std;
char a[25][25];
int main()
{
    int sz;
    string text;

    while(1){

        cin>>sz;
        if(sz==0)
            break;
        cin >>text;
        int j;
        int r=0,c=0;
        for(int i=0;i<text.size();i+=(sz*2)){
                c=0;
            for(j=i;j<i+sz;j++){
                a[r][c++]=text[j];
            }
        j--;
            r++;
            c=0;
            for(int k=(i+(sz*2))-1;k>j;k-- )
                a[r][c++]=text[k];
                r++;
        }
        for(int m=0;m<sz;m++){
            for(int n=0;n<r-1;n++)
                cout<<a[n][m];

        }
        cout <<endl;
    }
    return 0;
}
