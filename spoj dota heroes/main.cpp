#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc,n,m,d;
    cin >>tc;
    while(tc--)
    {
        cin >>n>>m>>d;
        vector <int> a(n,0);
        for(int i=0; i<n; i++)
            cin >>a[i];
        sort(a.rbegin(),a.rend());
        int i;
        int cnt=0;
        for(i=0; i<m; i++)
        {
            if(a[i]-d>d)
            {
                cnt++;
                a[i]=a[i]-d;
                i--;

            }
            else if(a[i]-d>=1)
            {
                cnt++;
            }
            else if(a[i]-d<=0){
                break;
            }

        }
        if(cnt>=m)
            cout <<"YES"<<endl;
            else
                cout <<"NO"<<endl;
    }
    return 0;
}
