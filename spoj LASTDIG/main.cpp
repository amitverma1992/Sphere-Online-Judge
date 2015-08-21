#include <bits/stdc++.h>

using namespace std;
int table[10][4]={
0,0,0,0,
1,1,1,1,
2,4,8,6,
3,9,7,1,
4,6,4,6,
5,5,5,5,
6,6,6,6,
7,9,3,1,
8,4,2,6,
9,1,9,1
};

int main()
{
    int tc;
    cin>>tc;
    int base,index;
    while(tc--){
            cin >> base;
            cin >> index;
            base=base % 10;
            if(index>=1){
        int ind=index % 4;
        ind=ind-1;
        if(ind==-1)
            ind=3;
    cout <<table[base][ind]<<endl;}
    else{
        cout << 1 <<endl;
    }
    }
    return 0;
}
