#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    long long third;
    long long lthird;
    long long sum;
    while(tc--){
        cin >> third>>lthird>>sum;
        long long n= (2*sum )/ (third + lthird);
        long long d= (lthird-third)/(n-5);
        long long a= third - 2*d;
        long long term;
        cout << n<<endl;
        for(long long i=1;i<=n;i++){
            term= a + (i-1)* d;
            cout <<term;
            if(i!=n)
                cout <<" ";
        }
        cout <<endl;

    }
    return 0;
}
