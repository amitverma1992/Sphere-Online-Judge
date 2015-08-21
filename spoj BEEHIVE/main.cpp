#include <bits/stdc++.h>

using namespace std;
//a(n) = 3n(n-1)+1
int main()
{
    long long n;
    while(1){
        cin >> n;
        if(n==-1)
            break;
        double x= sqrt((12 *n)-3);
        if(x-int(x)!=0)
            cout << "N"<<endl;
        else
            cout << "Y"<<endl;
    }
    return 0;
}
