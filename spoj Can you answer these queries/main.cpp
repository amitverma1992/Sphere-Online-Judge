#include <bits/stdc++.h>

using namespace std;
int arr[50000 + 5];
int segment[131080];
int segmentC(int si,int as,int ae){
    if(as==ae){
            if(arr[as]<0){
                segment[si]=0;
                return 0;
            }
            else{
                    segment[si]=arr[as];
        return arr[as];}
            }
    int mid= as + (ae-as)/2;
    segment[si]= segmentC(2*si+1,as,mid) + segmentC(2*si+2,mid+1,ae);
    return segment[si];
}
int getsum(int s,int e,int qs,int qe,int ind){
    if(qs<=s && qe>=e)
        {
            return segment[ind];
        }
    if(qs>e || qe<s)
        return 0;
    int mid = s+ (e-s)/2;
    return getsum(s,mid,qs,qe,2 *ind+1) + getsum(mid+1,e,qs,qe,2 *ind+2);
}

int main()
{
    int m,n,qs,qe;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin >>arr[i];
   // int h= ceil(log2(n+1));
    //int s= 2*(int)pow(2,h) -1;
    //memset(segment,0,sizeof segment);
    segmentC(0,0,n-1);
    scanf("%d",&m);
    int r;

    for(int i=0;i<m;i++){
        scanf("%d%d",&qs,&qe);
        r=getsum(0,n-1,qs-1,qe-1,0);
        if(r>0)
            printf("%d\n",r);
        else if(r==0){
            int x= *max_element(arr+qs-1,arr+qe-1);
            if(x<0){
                printf("%d\n", x);
            }
            else
                printf("%d\n", r);
        }


    }

    return 0;
}
