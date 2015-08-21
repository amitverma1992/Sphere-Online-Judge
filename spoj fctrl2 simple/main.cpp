#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long int n;
    while(tc--){
            cin >> n;
            long long int fact[30];
    fact[0]=1,fact[1]=1;
        for(int i=2;i<=n;i++){
            fact[i]=fact[i-1]*i;
        }
    cout << fact[n]<<endl;
    }
    return 0;
}
