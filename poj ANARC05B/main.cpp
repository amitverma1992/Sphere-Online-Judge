#include <bits/stdc++.h>

using namespace std;
int a[10001];
int a2[10001];

int main()
{
    int n,m;
    while(1){
        cin >> n;
        if(n==0)
            break;
        for(int i=0;i<n;i++){
            cin >>a[i];

            }
            cin >> m;
            for(int i=0;i<m;i++)
                cin >>a2[i];
            long long sofar1=0,sofar2=0,max1=0;
            int i,j;

            for(i=0,j=0;i<n && j<m;){
               if(a[i]>a2[j]){
                sofar2+=a2[j];
                j++;
               }
               else if(a[i]<a2[j]){
                sofar1+=a[i];
                i++;
               }
               else if(a[i]==a2[j]){
                sofar1+=a[i];
                sofar2+=a2[j];
                max1+=max(sofar1,sofar2);
               // cout <<sofar1<<" "<<sofar2<<" "<<max1<<endl;
                sofar1=sofar2=0;
                i++;j++;

               }

            }


            for(;j<m;j++)
                sofar2+=a2[j];
            for(;i<n;i++)
                sofar1+=a[i];

            max1+=max(sofar1,sofar2);
            cout << max1<<endl;

    }

    return 0;
}
