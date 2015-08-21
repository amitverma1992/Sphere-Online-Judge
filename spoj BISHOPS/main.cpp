#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    vector <char> results;
    while(cin>>n){
            if(n=="1"){
            cout <<"1"<<endl;
            continue;
            }
            results.clear();
        int c=0,comp,b=0;
        for(int i=n.size()-1;i>=0;i--){
            comp= (n[i]-'0') * 2 + c;
            if(b==1){
                if(comp==0)
                {
                    comp=9;

                }else{
                    comp=comp-1;
                    b=0;

                }
            }
            if(i==n.size()-1){
                if((comp % 10)>=2){
                    comp-=2;
                      results.push_back((comp % 10) + '0');
                  c= comp/10;
                 continue;

                }
                else{
                    b=1;
                    if(comp==10)
                        c=1;
                    comp=8;
                   results.push_back((comp % 10) + '0');
                   continue;
                }

            }

            results.push_back((comp % 10) + '0');
            c= comp/10;
        }
        if(c && b){

        }
        else if(c)
            results.push_back(c + '0');

            for(int i=results.size()-1;i>=0;i--)
                cout << results[i];
                cout <<endl;

    }

    return 0;
}
