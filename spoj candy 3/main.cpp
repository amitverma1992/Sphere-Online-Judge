#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    int n;
    long long int sum=0;
    long long int a;
    while(tc--){
            sum=0;
        cin.get();
        cin >>n;
        for(int i=0;i<n;i++){
            cin >>a;
            sum=sum+a;
            if(sum>=n)
                sum=sum%n;
        }
        if(sum%n==0)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}
