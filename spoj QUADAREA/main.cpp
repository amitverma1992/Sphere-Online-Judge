#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    double area;
    double a,b,c,d;
    double s;
    while(tc--){
            scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
            s=(a+b+c+d)/2;
            area=(s-a)*(s-b)*(s-c)*(s-d);
            area= pow(area,0.5);
            printf("%0.2lf\n",area);


    }
    return 0;
}
