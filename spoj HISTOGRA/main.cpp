#include <bits/stdc++.h>

using namespace std;
int a[100005];
long long getarea(int low,int high){
    int mid;
    while(low<=high){
        mid= (high+low)/2;
        getarea(low,mid);
        getarea(mid+1,high);
        area(low,high).;
    }
}
int main()
{
    int n;
    while(1){
        cin >> n;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long area= getarea(0,n-1);
    }

    return 0;
}
