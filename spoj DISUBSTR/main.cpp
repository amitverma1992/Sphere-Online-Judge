#include <bits/stdc++.h>

using namespace std;
string s;
int p[21][50010];

struct tup{
    int pr[2];
    int ind;
}L[50002];
int stp=1,cnt=1,N;
int cmp(struct tup a, struct tup b){
  return a.pr[0]==b.pr[0] ?(a.pr[1]<b.pr[1] ?1: 0): (a.pr[0]<b.pr[0] ?1: 0);
}

void buildSA(){
    N=s.size();
    for(int i=0;i<N;i++){
        p[0][i]= s[i]-'A';
    }
    for(stp=1,cnt=1;cnt<N;stp++,cnt*=2){
    for(int i=0;i<N;i++){
        L[i].pr[0]= p[stp-1][i];
        L[i].pr[1]= (i+cnt)<N ?p[stp-1][i+cnt]:-1;
        L[i].ind=i;
    }
    sort(L,L+N,cmp);
    for(int i=0; i < N; i++)
            p[stp][L[i].ind] =i> 0 && L[i].pr[0]==L[i-1].pr[0] && L[i].pr[1] == L[i- 1].pr[1] ? p[stp][L[i-1].ind] : i;

    }
}
int lcp(int x,int y){
     if(x == y)
  return s.size() - x;
 int ans  = 0;
 int i;
 for(i = stp - 1; i>=0 && x < s.size() && y < s.size();i--){
  if(p[i][x] == p[i][y]){
   ans += 1<<i;
   x += 1<<i;
   y += 1<<i;
  }
 }
 return ans;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
            stp=1;
        cin >> s;
        buildSA();
        long long temp=0;
        for(int i=0;i<s.size()-1;i++){
        temp = temp + lcp(L[i].ind,L[i+1].ind);
  }
  long long  l1 = s.size();
  long long ans = (l1 * (l1 + 1)) / 2 - temp;
  cout<<ans<<endl;

    }

    return 0;
}
