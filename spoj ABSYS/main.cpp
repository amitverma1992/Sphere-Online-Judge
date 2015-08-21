#include <bits/stdc++.h>

using namespace std;
int convert(string x){
    int res=0;
    for(int i=0;i!=x.size();i++)
        res=res*10 + x[i]-'0';
    return res;

}
string tostring(int y){
string res="";
while(y>0){
    res= res + char(y%10 + '0');
    y=y/10;
}
string res2="";
for(int i=res.size()-1;i>=0;i--)
    res2=res2 + res[i];
return res2;
}
int main()
{
   int tc;
   cin>>tc;
   string arr[5];


   while(tc--){
        cin.ignore();
    cin>>arr[0];
    cin.ignore(3);
    cin >>arr[1];
    cin.ignore(3);
    cin>>arr[2];
   int x=-1;
   for(int i=0;i<3;i++){
       if(arr[i].find("machula")!=string::npos)
        x=i;
        }
       int one,two,three;
       one=two=three=0;
       if(x==0){
            one=convert(arr[2])-convert(arr[1]);
            arr[0]=tostring(one);

            }
            else if(x==1){
                two=convert(arr[2])-convert(arr[0]);
                arr[1]=tostring(two);
            }
            else if(x==2){
                three= convert(arr[0]) + convert(arr[1]);
                arr[2]=tostring(three);
            }


                cout << arr[0]<<" + "<<arr[1]<<" = "<<arr[2];
                cout <<endl;





   }
    return 0;
}
