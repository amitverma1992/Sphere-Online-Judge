#include <bits/stdc++.h>

using namespace std;
int n,c;

int f(int x,int a[]){
    int cp=1;
    int placedtill=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-placedtill>=x){
            placedtill=a[i];
            cp++;
            if(cp==c)
                return 1;
        }
    }
    return 0;
}
int bs(int a[]){
    int l=0;
    int high=a[n-1];
    int max=-1;
    while(l<high){
        int mid=(l+high)/2;
        if(f(mid,a)){
            if(max<mid)
                max=mid;
            l=mid+1;
        }
        else
            high=mid;
    }
    return max;
}

int main()
{
    int tc;
    cin >>tc;

    while(tc--){
        cin >> n>>c;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];

        }
        sort(a,a+n);
        cout << bs(a)<<endl;


    }
    return 0;
}
