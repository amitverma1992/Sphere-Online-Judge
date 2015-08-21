#include <bits/stdc++.h>

using namespace std;
int a[100000 + 5];
int b[100000 + 5];
int main()
{
    int siz;
    while(1){
    cin >>siz;
    if(siz==0)
        break;
    for(int i=1;i<=siz;i++){
        cin>>a[i];
        b[a[i]]=i;
        }
        int num1=0;

        for(int i=1;i<=siz;i++){
           if(a[i]==b[i])
            num1++;
           else
            break;
        }


        if(num1==siz){
            cout <<"ambiguous"<<endl;

        }
        else
            cout <<"not ambiguous"<<endl;

    }
    return 0;
}
