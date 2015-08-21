#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n;

    cin >>n;

    if(n%2!=0 && n>1)
        cout <<"NIE";
    else{
        while(n % 2==0){
            n=n/2;
          //  if (n%3==0)
            //    break;
            }
        if(n<=1)
            cout <<"TAK";
            else
                cout <<"NIE";
    }

    return 0;
}
