#include <bits/stdc++.h>

using namespace std;
int arr[10005];
int main()
{
    int n;
    while(1){
        cin >>n;
        if(n==-1)
            break;
        for(int i=0;i<n;i++)
            cin >>arr[i];
        int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+arr[i];

        if(sum%n!=0){
            cout <<-1<<endl;
        }
        else{
                int eq=sum/n;
                int moves=0;
                for(int i=0;i<n;i++){
                    if(arr[i]>eq)
                        moves=moves+(arr[i]-eq);
                }
                cout << moves <<endl;


        }
    }
    return 0;
}
