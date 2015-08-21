#include <bits/stdc++.h>

using namespace std;
string num;
string old;
int carry=0;
int sz;
int flag=0;
void check(int lhalf,int fhalf){
    flag=0;
    carry=0;
    int store=lhalf;
    int store2=fhalf;
    while((num[lhalf]-'0')==(num[fhalf]-'0') && fhalf<=sz && lhalf>=0){
    lhalf=lhalf-1;
    fhalf=fhalf+1;
    }
    if(fhalf>sz && lhalf<0){
        lhalf=store;
        fhalf=store2;
    }
    else if((num[lhalf]-'0')<(num[fhalf]-'0')){
        lhalf=store;
        fhalf=store2;
    }
    int a=num[lhalf]-'0';
    int b=num[fhalf]-'0';
    if(a<=b){
        a++;
        if(a>9){
            a=0;
            carry=1;
        }
    }
    num[lhalf]=(char)(a + '0');
    int c,d=0;
    while(carry!=0){
            lhalf=lhalf-1;
            if(lhalf<0){
                d=1;
                break;
                }
        c=num[lhalf]-'0';
        c=c+1;
        carry=0;
        if(c>9){
            c=0;
            carry=1;
        }
        num[lhalf]=(char)(c + '0');
    }
    if(sz==0 && old[sz]=='9'){
        cout<<11<<endl;
    }
    else{
    int x=0;
    if(d==1){
        cout <<1;
        x=1;
        }
    for(int i=0;i<=store;i++)
        cout <<num[i];
        if(sz%2==0){
    for(int i=store-1;i>=x;i--)
        cout <<num[i];
     if(d==1)
        cout <<1;
        cout <<endl;}
        else{
            for(int i=store;i>=x;i--)
        cout <<num[i];
        if(d==1)
        cout <<1;

        cout <<endl;
        }
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
            cin >>num;
            sz= num.size()-1;
            old=num;
            int half=sz/2;
            if(sz%2==0)
                check(half,half);
                else
                check(half,half+1);
    }
    return 0;
}
