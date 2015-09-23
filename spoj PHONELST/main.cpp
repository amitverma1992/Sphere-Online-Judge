#include <bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    cin >> tc;
    int n;
    while(tc--){
        vector<string> str;
        cin >>n;
        string st;
        for(int i=0;i<n;i++){
            cin >> st;
            str.push_back(st);

            }
            sort(str.begin(),str.end());

            int f=0;
            int i;
            string prv="aa";
            string cp;
            int len;
            for(i=0;i<str.size()&& f==0;i++){
                len=prv.size();
                cp=str[i].substr(0,len);
                if(cp==prv){
                    cout<<"NO"<<endl;
                    f=1;
                    break;
                }
                prv=str[i];
            }
            if(f==0){
                cout <<"YES"<<endl;
            }


    }
    return 0;
}
