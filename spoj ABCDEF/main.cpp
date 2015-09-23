#include <bits/stdc++.h>

using namespace std;
int a[105];
int main()
{
    int n;
    cin >> n;
    vector <int> v,v2;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                v.push_back(a[i]*a[j] + a[k]);
            }
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                    if(a[k]==0)
                        continue;
                v2.push_back((a[i]+a[j])*a[k]);
            }
        }
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    long long res=0;
    int l,h;
    for(int i=0;i!=v.size();i++){
        l=lower_bound(v2.begin(),v2.end(),v[i])-v2.begin();
        h=upper_bound(v2.begin(),v2.end(),v[i])-v2.begin();
        res+=(h-l);

    }
    cout << res<<endl;

    return 0;
}
