#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    int n;
    while(tc--){
            vector <int> factors;
            int j=0;
            int m;
        scanf("%d",&n);
        m=n;
        for(int i=2;i*i<=n;i++){
            while(n%i==0){

            if(j!=i)
                factors.push_back(i);
                j=i;
                n/=i;
            }
        }
        if(n>1)
            factors.push_back(n);
            //int sum=n;
            long long fi=m;

            for(int k=0;k!=factors.size();k++)
            {
                fi=(fi * (factors[k]-1))/factors[k];
            }

           cout <<fi<<endl;

    }
    return 0;
}
