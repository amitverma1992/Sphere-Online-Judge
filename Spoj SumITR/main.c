#include <stdio.h>
#define f(x,b) for(x=1;x<=b;x++)
#define s(l) scanf("%d",&l);
int main()
{int a[102][102],n,i,j,tc;s(tc);while(tc--){s(n);f(i,n)f(j,i)s(a[i][j]);for(i=n-1;i>=1;i--)f(j,i)a[i][j]+=max(a[i+1][j+1],a[i+1][j]);printf("%d\n",a[1][1]);}return 0;}
