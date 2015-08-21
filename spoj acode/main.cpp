#include <bits/stdc++.h>

using namespace std;


string str;
int dp[5010];

long long solve(int pos,int sz){
    int s1;
    s1=str[pos]-'0';
    if(pos>=str.size())
        return 0;
if(sz==2){
if(s1!=0)
    s1=s1*10 + (str[pos+1]-'0');
    else
        s1=0;
    if(s1>26 || s1<1)
        return 0;
}
if (sz==1){
    if(s1>26 || s1<1)
        return 0;
}
if(sz==1){
if(pos==str.size()-1 && (s1<=26 || s1 >0))
    return dp[pos]=1;
}
if(sz==2){
    if(pos==str.size()-1 && (s1<=26 || s1>0))
        return dp[pos]=1;
}
if (sz==1){
if((pos+1 )<str.size() && dp[pos]==-1)
    dp[pos]= solve(pos+1,1) + solve(pos+1,2);
}else if (sz==2){
if((pos+2) <str.size() && dp[pos+1]==-1)
    dp[pos+1]= solve(pos+2,1) + solve(pos+2,2);
}
    if(sz==1)
return dp[pos];
else if(sz==2)
    return dp[pos+1];
}

int main()
{

    while(1){
            memset(dp,-1,sizeof dp);
        cin >> str;
        if(str=="0")
            break;

           long long count= solve(0,1) + solve(0,2);
           cout << count <<endl;


    }


    return 0;
}
