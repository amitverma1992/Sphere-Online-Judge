#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,maxsum;
    cin >> n>>maxsum;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin >> a[i];

    int s=0,e=0;
    //int prevsum=0;
    int x=0;
    for(int i=0; i<n; i++)
    {
        e=e+a[i];
        while(e>maxsum)
        {
            e=e- a[x];
            x++;
            if(e<=maxsum && s<=e)
            {
                s=e;
                break;
            }
        }
            if(e<=maxsum && s<=e)
            {
                s=e;
            }

    }
    cout <<s<<endl;

    return 0;
}
