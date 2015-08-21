#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m= sqrt(n);
    int sum=0;
    for(int i=1;i<=m;i++){
        sum=sum + (n/i) -(i-1);
    }
    cout <<sum;

    return 0;
}
