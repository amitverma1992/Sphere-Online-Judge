#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    double r;
    for(int i=1;i<=tc;i++){
        cin >>r;
        double s= 0.25 + (4 * r * r);
        printf("Case %d: %0.2lf\n",i,s);
    }
    return 0;
}
