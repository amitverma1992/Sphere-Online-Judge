#include <bits/stdc++.h>

using namespace std;
int a[20000 + 5];
int main()
{
    int tc;
    cin >> tc;
    int n,k;
    while(tc--){
        cin >>n>>k;
        for(int i=0;i<n;i++)
            cin >>a[i];
        sort(a,a+n);
        int min1=a[k-1]-a[0];
        for(int i=1;i<=n-k;i++){
            if(min1>a[i+k-1]-a[i])
                min1=a[i+k-1]-a[i];
        }
        cout <<min1<<endl;
    }

    return 0;
}
