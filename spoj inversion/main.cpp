#include <bits/stdc++.h>

using namespace std;
int a[200000 + 5];
long long inv2;
void merge1(int low,int mid,int high){
    int i=low;
    int j=mid+1;
    for(int k = low;k <= high;k++){
            if(i<=mid || j<=high)
        if(a[i]>a[j]){
            inv2+= (mid+1)-(i);
            j++;
        }
        else
            i++;
    }

}

void merge_sort(int low, int high){

if(low!=high){
    int mid= (low+high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge1(low,mid,high);

}
}

int main()
{
    int n;
    int tc;
    while(tc--){
            inv2=0;
        cin.get();
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
           merge_sort(0,n-1);
           cout <<inv2<<endl;


    }

    return 0;
}
