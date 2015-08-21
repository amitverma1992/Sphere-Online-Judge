#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    while(1){
        cin >> l;
        if(l==0)
            break;
        double res= (l*l)/(2 * 3.14159);
        printf("%.2lf\n", res);

    }
    return 0;
}
