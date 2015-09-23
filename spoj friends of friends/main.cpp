#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> s;
    set <int> ss;
    int n;
    cin >> n;
    int x,m;
    for(int i=0;i<n;i++){
        cin >> x;
        ss.insert(x);
        cin >> m;
        for(int j=0;j<m;j++){
                cin >>x;
            s.insert(x);
        }

    }

    vector <int> v(150);
    vector <int> :: iterator it;

    it=set_union(ss.begin(),ss.end(),s.begin(),s.end(),v.begin());
    v.resize(it-v.begin());
    cout << v.size()-ss.size()<<endl;










    return 0;
}
