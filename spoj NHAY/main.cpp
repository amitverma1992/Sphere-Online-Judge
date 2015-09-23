#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.txt","w",stdout);
    int n;
    string str;
    string pat;
    while(scanf("%d",&n)==1)
    {
        cin >>pat;
        cin >>str;
        int pos=-1;
        int prev=-1;
        int x=str.size();
        int i;
        for(i=0; i<x; i++)
        {
            pos=str.find(pat,i);
            if(pos!=-1)
            {
                prev=pos;
                cout <<pos<<endl;
                i=pos;
            }


        }
        if(prev==-1 && i==x)
            cout <<endl;
            cout <<endl;

    }

    return 0;
}
