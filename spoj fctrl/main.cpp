#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long N;
    while(tc--){
        cin>>N;
        int zeroes=0;
        while(N>=5){
            zeroes=zeroes + (N/5);
            N=N/5;
        }
        cout <<zeroes<<endl;
    }
    return 0;
}
