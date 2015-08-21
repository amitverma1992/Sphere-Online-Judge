#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    long long n;
    while(tc--){
        cin >>n;
        unsigned long long result= (n * (n+2) * (2*n + 1))/8;
        cout <<result<<endl;
    }
    return 0;
}
