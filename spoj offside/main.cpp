#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(1){
            cin >> n>>m;
        if(n==0 && m==0)
            break;
        int arr[n+1];
        int arr2[m+1];
        for(int i=0;i<n;i++)
        cin >>arr[i];
        for(int i=0;i<m;i++)
        cin >>arr2[i];
        sort(arr,arr+n);
        sort(arr2,arr2+m);

        if(arr[0]<arr2[1])
            cout << "Y"<<endl;
        else
            cout <<"N"<<endl;



    }

    return 0;
}
