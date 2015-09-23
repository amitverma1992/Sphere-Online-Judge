#include <bits/stdc++.h>

using namespace std;
bool win[1000002];
int main()
{
    int k,l,m;
    cin >>k>>l>>m;
    int maxl=0,a[m+1];
    for(int i=0;i<m;i++){
        cin >> a[i];
        maxl=max(maxl,a[i]);

    }
    win[0]=false;
    win[1]=true;
    for(int i=2;i<=maxl;i++){
        win[i]=!win[i-1];
        if(i>=k && !win[i-k])win[i]=true;
        if(i>=l && !win[i-l])win[i]=true;
    }

    for(int i=0;i<m;i++){
        if(win[a[i]])
            cout <<'A';
        else
            cout <<'B';
    }
    cout <<endl;
    return 0;
}
