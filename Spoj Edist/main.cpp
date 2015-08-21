#include <bits/stdc++.h>

using namespace std;
int count1[3000+2][3000+2];
int main()
{
    string first;
    string second;
    int tc;
    cin >>tc;


    while(tc--){
        memset(count1,0,sizeof count1);
        cin >> first;
        cin >> second;
        int fs=first.size();
        int ss=second.size();

        for(int i=0;i<=fs;i++)
            count1[i][0]=i;
        for(int j=0;j<=ss;j++)
            count1[0][j]=j;
        for(int j=1;j<=ss;j++){
            for(int i=1;i<=fs;i++){
                if(first[i-1]==second[j-1])
                    count1[i][j]=count1[i-1][j-1];
                else {
                    count1[i][j]=min(count1[i-1][j]+1,count1[i][j-1]+1);
                    count1[i][j]=min(count1[i][j], count1[i-1][j-1]+1);
                }
        }
        }
        cout << count1[fs][ss]<<endl;

    }
    return 0;
}
