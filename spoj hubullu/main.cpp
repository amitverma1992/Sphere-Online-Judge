#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    int n,p;
    while(tc--){
        cin >>n>>p;
        if(p==0)
            cout <<"Airborne wins."<<endl;
        else
            cout <<"Pagfloyd wins."<<endl;
    }
    return 0;
}
