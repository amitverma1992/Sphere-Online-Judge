#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int results;
    while(1){
        cin>>n;
        if(n==0)
            break;
        results= (n * (n+1) * (2*n + 1))/6;
        cout <<results<<endl;
    }
    return 0;
}
