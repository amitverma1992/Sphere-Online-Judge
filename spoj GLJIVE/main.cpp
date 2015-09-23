#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[11],sum=0;

    for(int i=0;i<10;i++){
        cin >>a[i];
        sum+=a[i];
        if(sum>=100){
            if((sum-100)<=(100-(sum-a[i])))
               cout << sum<<endl;
               else
                cout<< sum-a[i]<<endl;
            return 0;
        }
    }
    cout << sum <<endl;
    return 0;
}
