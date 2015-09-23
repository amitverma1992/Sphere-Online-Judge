#include <bits/stdc++.h>

using namespace std;

int gcd(int x,int a)
{
    if(a==0)
        return x;
    else
        return gcd(a, x%a);
}


int getmod(string b,int a)
{
    int n=b.size();
    int d;
    d= (b[0]-'0') % a;
    for(int i=1; i!=n; i++)
    {
        d=d*10;
        d=d + (b[i]-'0');
        d= d % a;
    }
    return d;

}
int main()
{
    int tc;
    cin >> tc;
    int a;
    string b;
    while(tc--)
    {
        cin >>a>>b;
        int x;
        if(a!=0)
         x=getmod(b,a);
        if (a!=0)
        cout << gcd(x,a)<<endl;
        else
            cout <<b<<endl;


    }
    return 0;
}
