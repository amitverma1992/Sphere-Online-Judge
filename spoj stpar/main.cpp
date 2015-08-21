#include <bits/stdc++.h>

using namespace std;

int main()
{



    int n;
    while(1){
            stack <int> st;
            cin>>n;
            if(n==0)
                break;
            vector <int> a(n+1);
            vector <int> b(n+1);

        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        int k=0;
        int flag=0;
        for(int i=1;i<=n;i++){

                   if(!st.empty() && st.top()<=i){

                    if(st.top()==i){
                        st.pop();
                        continue;
                    }else if(st.top()==i-1)
                    st.pop();
                    else{
                        flag=1;
                        break;
                    }
                }
            for(int j=k;j<n;j++){
                if(a[j]>i){
                    st.push(a[j]);
                    k=j+1;
                    //4231

                }else if(a[j]==i){
                    k=j+1;
                    break;

                }else
                k=j+1;



            }
            if (flag==1)
                break;
        }
        if(!st.empty())
            cout <<"no"<<endl;
        else
            cout <<"yes"<<endl;



    }
    return 0;
}
