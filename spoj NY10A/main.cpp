#include <bits/stdc++.h>

using namespace std;
map <string,int> arr;


int main()
{

    int tc;
    cin >>tc;
    string x;
    int n;
    for(int i=1; i<=tc; i++)
    {
        arr["TTT"]=0;
        arr["TTH"]=0;
        arr["THT"]=0;
        arr["THH"]=0;
        arr["HTT"]=0;
        arr["HTH"]=0;
        arr["HHT"]=0;
        arr["HHH"]=0;
        cin >> n;
        cin >> x;

        for(int i=0; i<38; i++)
        {
            std::string y( &x[i], &x[i] + 3);
            arr[y]+=1;}
            cout <<n<<" "<<arr["TTT"]<<" "<<arr["TTH"]<<" "<<arr["THT"]<<" "<<arr["THH"]<<" "<<arr["HTT"]<<" "<<arr["HTH"]<<" "<<arr["HHT"]<<" "<<arr["HHH"]<<endl;
    }

    return 0;
}
