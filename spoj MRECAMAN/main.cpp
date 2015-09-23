#include <bits/stdc++.h>

using namespace std;
bool b[10000000]={false};
int main()
{
    vector <int> a;
    a.push_back(0);
    b[0]=true;
    for(int i=1;i<=500000;i++){
        if((a[i-1]-i)>0 && b[a[i-1]-i]==false){
            a.push_back(a[i-1]-i);
            b[a[i-1]-i]=true;
        }
        else{
             a.push_back(a[i-1]+i);
             b[a[i-1]+i]=true;
             }
    }
    int k;

    while(1){
        cin >>k;
        if(k==-1)
            break;
        cout <<a[k]<<endl;
    }

    return 0;
}
