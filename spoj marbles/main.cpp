#include <bits/stdc++.h>

using namespace std;
long long solve(int n,int c){
    if(c>n-c)
        c=n-c;
    long long ans=1;
    for(int i=0;i<c;i++)
        ans=ans * (n-i)/(i+1);
    return ans;
}

int main()
{

    int tc;
    cin >>tc;
    int n,c;
    while(tc--){
        cin >> n>>c;
        cout << solve(n-1,c-1)<<endl;


    }
    return 0;
}
