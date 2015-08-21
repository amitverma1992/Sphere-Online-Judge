#include <bits/stdc++.h>

using namespace std;

string postexp="";
int getPrecidence(char x){
    switch(x){
    case '(':
        return 0;

case '+':
case '-':
    return 1;
case '*':
case '/':
    return 2;
case '^':
    return 3;
    }

}

int main()
{
    string exp;
   int tc;
   cin >> tc;
   stack <char> stck;
   stck.push('#');
   int prec;

   while(tc--){
        postexp="";
    cin >>exp;
    int sz=exp.size();

    for(int i=0;i!=sz;i++){
        switch(exp[i]){
            case '(':
                   stck.push(exp[i]);
                   break;
            case ')':
                while(stck.top()!='('){

                        postexp+=stck.top();
                        stck.pop();
                      }
                      if(stck.top()=='(')
                            stck.pop();
                      break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                prec=getPrecidence(exp[i]);
                while(stck.top()!='#' && prec<=getPrecidence(stck.top())){
                    postexp+=stck.top();
                    stck.pop();
                }
                stck.push(exp[i]);
                break;
            default:
                postexp+=exp[i];
        }
    }
    cout << postexp<<endl;

   }
    return 0;
}
