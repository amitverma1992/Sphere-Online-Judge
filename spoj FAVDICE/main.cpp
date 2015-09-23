#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    int n;
    while(tc--){
        cin >> n;
        double sum=0.0;
        for(int i=n;i>=1;i--){
            sum+=((double)n/i);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
