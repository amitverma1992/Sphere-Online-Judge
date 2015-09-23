#include <bits/stdc++.h>

using namespace std;
int arr[1000005];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int w;
    scanf("%d", &w);
    for(int i=0;i<=n-w;i++){
        printf("%d ", *max_element(arr+i,arr+i+w));

    }
    printf("\n");

    return 0;
}
