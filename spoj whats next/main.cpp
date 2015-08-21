#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f,s,t;
    while(1){
        cin >>f>>s>>t;
        if(f==0 && s==0 && t==0)
            break;
        if(s-f==t-s)
            cout << "AP"<<" "<<t+(t-s)<<endl;
        else if(s/f == t/s)
            cout << "GP"<<" "<< t*(t/s)<<endl;
    }

    return 0;
}
