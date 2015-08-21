#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g, b;
    while(1){
        cin >> g>>b;
        if(g==-1 && b==-1)
            break;
        if(g==b){
            cout << 1 <<endl;
        }else if(g==0){
            cout << b <<endl;
        }
        else if(b==0){
            cout << g <<endl;
        }
        else if (g==1){
            if(b % 2==0)
                cout << b/2<<endl;
            else
                cout << (b/2) +1 <<endl;
        }
        else if(b==1){
            if(g % 2==0)
                cout << g/2<<endl;
            else
                cout << (g/2) +1 <<endl;
        }
        else{
                if(g%2!=0 && b % 2!=0){
                        if((g+b)% ((g<b)?g:b) ==0){

                        }

                }
                else{

                }

        }
    }
    return 0;
}
