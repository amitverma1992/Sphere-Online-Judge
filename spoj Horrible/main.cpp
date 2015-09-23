#include <bits/stdc++.h>

using namespace std;
long long st[300000];
long long a[100005];
long long ST(int s,int e,int index){
    if(s==e){
        st[index]=a[s];
        return a[s];
    }
    int mid= (s+e)/2;
    st[index]= ST(s,mid,2*index) + ST(mid+1,e,2*index+1);
    return st[index];
}
long long getsum(int s,int e,int qs,int qe,int index){
    if(qs<=s && qe>=e)
        return st[index];
    if(e<qs || s>qe)
        return 0;
    int mid= (s+e)/2;
    return getsum(s,mid,qs,qe,2*index) + getsum(mid+1,e,qs,qe,2*index+1);
}
void update(int s,int e,int qs,int qe,int val){

}
int main()
{
    int tc;
    cin >>tc;
    int n,c;
    while(tc--){
        memset(a,0,sizeof a);
        memset(st,0,sizeof st);
        cin >> n>>c;
        int strt,en,ac,v;
        for(int i=0;i<c;i++){
            cin >>ac>>strt>>en;
            if(ac==0){
                cin >>v;
                update(1,n,strt,en,v);

            }
            else if(ac==1){
                cout << getsum(1,n,strt,en,1)<<endl;
            }
        }
    }
    return 0;
}
