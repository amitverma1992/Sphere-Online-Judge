#include <bits/stdc++.h>

using namespace std;

string subtract(string tot,string diff){
string res="";
int sz1=tot.size()-1;
int sz2=diff.size()-1;
int i=sz1;
int j=sz2;
int borrow=0;
int digf,digs;
while(j>=0){
    digf=tot[i]-'0';
    digs=diff[j]-'0';
    if(borrow>0){
        if(digf==0){
            digf=9;
        }else{
            digf=digf-borrow;
            borrow=0;        }
    }
    if(digf<digs){
        digf=digf+10;
        borrow++;
    }
    res=res + (char)((digf-digs) + '0');
    i--;
    j--;
}
int k=sz1-sz2;
k=k-1;
int dig;
while(k>=0){
        dig=tot[k]-'0';
      if(borrow>0){
        if(dig==0){
            dig=9;
        }else{
            dig=dig-borrow;
            borrow=0;        }
    }
   res=res + (char)(dig + '0');
    k--;
}
int sz3=res.size()-1;
while(res[sz3]=='0'){
    res.erase(sz3);
    sz3--;
}
string res2="";
for(int i=res.size()-1;i>=0;i--)
    res2=res2+res[i];
return res2;
}
string divide(string str){
    int num=0;
    int q;
    string result="";
    for(int i=0;i<str.size();i++){
            if(num==0)
        num=str[i]-'0';
    else
        num=num*10+ (str[i]-'0');
        q=num/2;
        if(num%2==0)
            num=0;
        else
            num=num- (2*q);
        result=result + (char)(q+'0');
}
int s=0;
while(result[s]=='0'){
    result.erase(s);
s++;}
return result;
}

int main()
{
    string tot,diff;
    int tc=10;
    while(tc--){
        cin >> tot>>diff;
       string res=subtract(tot,diff);
       string res2=divide(res);
       string res3=subtract(tot,res2);
       cout <<res3<<endl;
       cout <<res2<<endl;
    }

    /*
    33,17
    0,0
    2003, 69
    */
    return 0;
}
