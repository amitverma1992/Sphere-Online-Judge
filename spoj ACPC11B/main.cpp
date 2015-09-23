#include <bits/stdc++.h>

using namespace std;
#define INF 10000000
int arr[1005];
int arr2[1005];
int main()
{
    int tc;
    cin >> tc;
    int n, m;
    while(tc--){
            cin >> n;
            int min = INF;
            for(int i=0;i<n;i++)
                cin >> arr[i];
                cin >> m;
            for(int i=0;i<m;i++)
                cin >>arr2[i];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(min > abs(arr[i]-arr2[j]))
                        min=abs(arr[i]-arr2[j]);
                }
            }
            cout << min<<endl;

    }
    return 0;
}
