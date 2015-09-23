#include <bits/stdc++.h>

using namespace std;
map<string,int> m;
int main()
{

    int tc;
    int n;
    cin >>tc;

    while(tc--){
            m.clear();
        cin >> n;
        getchar();
    string str;
        for(int i=0;i<n;i++){
            getline(cin,str);
        m[str]++;}
        map <string,int> :: iterator i;
        for(i=m.begin();i!=m.end();i++){
            cout <<i->first.c_str()<<i->second<<endl;
        }
        if(tc)
            cout <<endl;

    }

    return 0;
}
