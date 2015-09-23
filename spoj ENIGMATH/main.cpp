#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a,long long b){
    if(a==0)
        return b;
    else
        return gcd(b%a, a);
}
int main()
{
    int tc;
    cin >> tc;
    long long  a,b;
    long long n;
    while(tc--){
        cin >>a>>b;
        n=gcd(a,b);
        cout << b/n<<" "<<a/n<<endl;
    }

    return 0;
}
