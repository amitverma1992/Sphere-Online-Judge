#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    double u,v,w,U,V,W,a,b,c,d,vol,X,x,Y,y,Z,z;
    while(tc--){
            cin >>u>>v>>w>>W>>V>>U;
            X=(w-U+v) * (U+v+w);
            x=(U-v+w) * (v-w+ U);
            Y= (u-V + w) * (V + w + u);
            y= (V-w+u) * (w-u+V);
            Z= (v-W + u) *(W+u+v);
            z=(W-u+v) *(u-v+W);
            a=sqrt(x * Y * Z);
            b=sqrt(y * Z * X);
            c=sqrt(z* Y * X);
            d= sqrt(x * y * z);
            vol= sqrt((-a + b + c+ d)*(a- b + c+ d) * (a+ b-c+d) * (a+ b+ c-d));
            vol= vol/(192 * u * v * w);
            printf("%.4lf\n", vol);


    }
    return 0;
}
