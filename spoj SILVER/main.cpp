#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1){
            cin >>n;
        if(n==0)
            break;
        cout << (int)(log(n)/log(2))<<endl;
    }
    return 0;
}
