#include <bits/stdc++.h>

using namespace std;
int a[1005];
int b[1005];
int main()
{
    int tc;
    cin >>tc;
    int n;
    while(tc--){
        cin >>n;
        for(int i=0;i<n;i++){
         cin>>a[i];
        }
         for(int i=0;i<n;i++){
         cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);



        long int sum=0;

        for(int j=0;j<n;j++){
           sum=sum+ (a[j] * b[j]) ;
        }
        cout <<sum<<endl;
    }

    return 0;
}
