#include <bits/stdc++.h>

using namespace std;
int st[132000];
int a[50005];
int l,r;
int ST(int s,int e, int index)
{
    if(s==e)
    {

        st[index]=a[s];
        return a[s];
    }
    int mid= s+(e-s)/2;
    st[index]=ST(s,mid,2 * index ) + ST(mid+1,e,2*index + 1);

    return st[index];

}
int getsum(int s,int e,int qs,int qe,int ind)
{
    if(qs<=s && qe>=e)
    {

        return st[ind];
    }
    if(qs>e || qe<s)
        return 0;
    int mid= s+(e-s)/2;
    int mx1=max(getsum(s,mid,qs,qe,2*ind),getsum(s,mid,qs,qe,2*ind) + getsum(mid+1,e,qs,qe,2*ind+ 1));
    return max(mx1,getsum(mid+1,e,qs,qe,2*ind+1));

}
void update(int s,int e,int i,int diff,int index)
{
    if(i<s || i>e)
        return;
    st[index]=st[index] + diff;
    if(e!=s){
    int mid= s+ (e-s)/2;
    update(s,mid,i,diff,2 *index );
    update(mid+1,e,i,diff,2 *index + 1);}
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);
    ST(1,n,1);
    int num;
    scanf("%d", &num);
    int do1,qs,qe,x,y;
    for(int i=0; i<num; i++)
    {

        cin >>do1;
        if(do1==1)
        {
            cin >> qs>>qe;
            cout <<getsum(1,n,qs,qe,1)<<endl;

        }
        else if(do1==0)
        {
            cin >>x>>y;
            int diff= y-a[x];
            a[x]=y;
            update(1,n,x,diff,1);
        }
    }
    return 0;
}
