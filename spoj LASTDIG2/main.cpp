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
    cin >>tc;
    string base;
    unsigned long long index;
    while(tc--){
        cin >> base;
        cin >> index;
        int b=base[base.size()-1] -'0';
        int ind;
        if(index>=1){
            if(index%4==0)
                ind=3;
            else
            ind= (index%4)-1;

            cout <<table[b][ind]<<endl;
        }
        else
            cout << 1<<endl;
    }
    return 0;
}
