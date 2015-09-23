#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int rows,col;
    int re=0,ce=0;
    while(tc--){
            char dir;
        cin >>rows>>col;
        re=0;
        ce=0;
        if((rows%2)==0)
            re=1;
        else
            re=0;
        if((col%2)==0)
            ce=1;
        else
            ce=0;
        if(re==0 && (ce==1 || ce==0) && col>=rows)
        dir='R';
    else if((re==0 || re==1) && ce==0 && rows>=col )
        dir='D';
    else if(re==1 && (ce==1 || ce==0) && col>=rows)
        dir='L';
    else if((re==0 || re==1) && ce==1 && rows>=col)
        dir='U';


    cout <<dir<<endl;
    }
    return 0;
}
