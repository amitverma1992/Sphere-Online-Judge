#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[28];
    int arr2[28];
    string str1,str2;
    while(cin >> str1){
        cin>>str2;
        memset(arr,0,sizeof arr);
        memset(arr2,0,sizeof arr2);
        int ind;
        for(int i=0;i!=str1.size();i++){
            ind=(int)str1[i]-97;
            arr[ind]++;


        }
            for(int i=0;i!=str2.size();i++){
            ind=(int)str2[i]-97;
            arr2[ind]++;

        }
        for(int i=0;i<26;i++){
            while(arr[i]>0 && arr2[i]>0){
                    cout<<(char)(i+97);
                    arr[i]--;
                    arr2[i]--;
                }


        }
        cout <<endl;
    }
    return 0;
}
