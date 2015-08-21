#include <bits/stdc++.h>

using namespace std;
int arr[1000+5];
int main()
{
    int tc;
    cin>>tc;
    int sum;
    int n;
    for(int j=1;j<=tc;j++){
        cin >> sum;
        cin >>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        int count=0;
        int sum2=0;
        for(int i=n-1;i>=0;i--){
            sum2=sum2+arr[i];
            count++;
            if(sum2>=sum)
                break;
        }
        if(sum2>=sum)
            cout <<"Scenario #"<<j<<":"<<endl<<count <<endl;
        else
            cout<<"Scenario #"<<j<<":"<<endl<<"impossible"<<endl;

            cout <<endl;

    }

    return 0;
}
