#include <bits/stdc++.h>

using namespace std;

int main()
{
   int tc;
   scanf("%d",&tc);
   int n;
   while(tc--){
        scanf("%d",&n);
        map <int,int> m;
        int x;
        int max=0;
        int num;
        for(int i=0;i<n;i++){
            scanf("%d", &x);
            m[x]++;
            if(max<m[x]){
                max=m[x];
                num=x;
                }

        }
        if(max> (n/2)){
            printf("YES %d\n", num);
        }
        else
            printf("NO\n");




   }
    return 0;
}
