#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int dig1,dig2;
    while(tc--){
        cin>>dig1>>dig2;
        int revdig1=0,revdig2=0;
        while(dig1!=0){
            revdig1= 10 * revdig1 + (dig1%10);
            dig1=dig1/10;
        }

         while(dig2!=0){
            revdig2= 10 * revdig2 + (dig2%10);
            dig2=dig2/10;
        }
        int sum=revdig1 + revdig2;
        int revsum=0;
            while(sum!=0){
            revsum= 10 * revsum + (sum%10);
            sum=sum/10;
        }
        cout <<revsum<<endl;

    }
    return 0;
}
