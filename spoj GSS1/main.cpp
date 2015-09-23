#include <bits/stdc++.h>

using namespace std;
int a[50000 + 5];
int main()
{
    int m,n,x,y;
    cin >>n;
    for(int i=1;i<=n;i++)
       scanf("%d", &a[i]);
    scanf("%d", &m);
    for(int j=0;j<m;j++){
        scanf("%d%d", &x,&y);
        int me=0;
        int s=0;
        for(int k=x;k<=y;k++){
            me=a[k];
            if(s< s+ me)
                s=s+me;
                //cout <<s<<endl;
        }
        if(s==0)
            s=-15007;
        printf("%d\n",max(s,*max_element(a+x,a+y)));

    }
    return 0;
}
