#include <bits/stdc++.h>

using namespace std;

int main()
{
    double in;
    while(1){
        cin >> in;
        if(in==0.00)
            break;
            int n;
            if(in<0.5)
                cout << 1 <<" card(s)"<<endl;
                else {

                n=3;

        double cl=0.5;
       int c=2;
        while((cl+ 1/(double)n)<=in){
            cl=cl+ 1/(double)n;

            c=n;
            n++;
        }
        cout <<c <<" card(s)"<<endl;
                }

    }
    return 0;
}
