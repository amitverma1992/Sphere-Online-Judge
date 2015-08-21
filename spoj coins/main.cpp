#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1){
            n=-1;
            cin >>n;
            if(n==-1)
                break;


        int totsum=0;
        totsum=totsum + n/2 + n/3 + n/4;
        if(totsum>n)
            cout << totsum<<endl;
        else
            cout << n<<endl;
    }
    return 0;
}
