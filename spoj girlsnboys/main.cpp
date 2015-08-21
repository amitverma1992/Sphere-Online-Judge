#include <bits/stdc++.h>

using namespace std;

int main()
{
    int G,B;
    while(1){
        cin >>G>>B;
        if(G==-1 && B==-1)
            break;
            int result;
        if(G>B){
            result= ceil((double)G/(double)(B + 1));
        }
        else
            result=ceil((double)B/(double)(G + 1));

        cout << result<<endl;
    }
    return 0;
}
