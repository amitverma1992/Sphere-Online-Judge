#include<iostream>
using namespace std;
#define f(x,b) for(x=1;x<=b;x++)
 main()
{int a[102][102],n,i,j,tc;cin>>tc;while(tc--){cin>>n;f(i,n)f(j,i)cin>>a[i][j];for(i=n-1;i>=1;i--)f(j,i)a[i][j]+=max(a[i+1][j+1],a[i+1][j]);cout<<a[1][1]<<endl;}}
