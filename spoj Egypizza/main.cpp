#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    double c=0;
    double rem=0;
    //int count=0;
    string x;
    for(int i=0;i<n;i++){
        cin >>x;
        if(x[0]=='1' && x[2]=='2'){
            rem+=(1-0.5);

        }
        else if(x[0]=='1' && x[2]=='4'){
            rem+=(1-0.25);

        }
        else if(x[0]=='3' && x[2]=='4'){
            rem+=(1-0.75);

        }

    }
    rem=floor(rem+1);
    cout << n-(rem-1) <<endl;

    return 0;
}
