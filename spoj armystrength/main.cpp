#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> g;
    vector <int> m;
    int tc;
    cin >> tc;
    int gn,gm;
    while(tc--){
        cin.get();
        cin>>gn>>gm;
        g.resize(gn,0);
        m.resize(gm,0);
        for(int i=0;i<gn;i++){
            cin >> g[i];

        }
           for(int i=0;i<gm;i++){
            cin >> m[i];

        }

        int i=0;
        int j=0;
        if(gn==0 && gm==0)
            cout <<"uncertain"<<endl;
        else
        while(1){
            if(gn==0){
                cout <<"MechaGodzilla"<<endl;
                break;

                }
                if(gm==0){
                    cout <<"Godzilla"<<endl;
                    break;
                }
                if(g[i]>=m[j]){
                        j++;

                    gm--;
                }else{
                    i++;

                    gn--;

                }

        }
    }
    return 0;
}
