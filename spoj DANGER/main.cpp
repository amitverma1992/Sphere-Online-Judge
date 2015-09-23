#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(1){
        cin >> str;
        int x= 10 * (str[0]-'0') + (str[1] - '0');
        int e=str[3]-'0';
        if(x ==0 && e==0)
            break;
        while(e--)
        x*=10;
        int z=1;
        while(z<=x)
            z<<=1;
        cout << 1 + ((x-(z>>1))* 2)<<endl;
    }
    return 0;
}
