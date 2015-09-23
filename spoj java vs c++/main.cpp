#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("a.out","w",stdout);
    string s;
    int n;
    int flag=0;
    int uexist=0;
    int cexist=0;
    while(cin >> s){
            flag=0;
            uexist=0;
            cexist=0;
            string x="";
            //x.append(s.size(),' ');
            //cout <<x<<endl;
        n=s.size();

    for(int i=0;i<n;){
            if(s[0]=='_' || (s[0]>=65 && s[0]<=90)){
                flag=1;
                break;
            }
            if(s[n-1]=='_'){
                flag=1;
                break;
            }
            if(s[i]=='_' && (s[i+1]=='_'  || (s[i+1]>=65 && s[i+1]<=90))){
                flag=1;
                break;
            }
            if((s[i]>=65 && s[i]<=90) && s[i+1]=='_'){
                flag=1;
                break;
            }


         if(cexist==1 && s[i]=='_'){
            flag=1;
                break;
        }

        else if(uexist==1 && s[i]>=65 && s[i]<=90){
            flag=1;
                break;
        }
         if(s[i]=='_' && s[i+1]>=97 && s[i+1]<=122){
                x+=(int)s[i+1]-32;
            i=i+2;
            uexist=1;
        }

        else if(s[i]>=65 && s[i]<=90){
            x+='_';
            x+=(int)s[i] + 32;
            i++;
            cexist=1;
            //i--;
        }
                else{
            x+=s[i];
            i++;
        }
    }
    if(flag==1)
        cout <<"Error!"<<endl;
    else
    cout << x<<endl;

    }
    return 0;
}
