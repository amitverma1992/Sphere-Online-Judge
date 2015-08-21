#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int num=0;
    int x=n;
    int sum=0;
    vector <int> mem;
    while(x!=1)
    {
        sum=0;
        while(n>0)
        {
            sum+=(n%10) * (n%10);
            n/=10;
        }
        if(find(mem.begin(),mem.end(),sum)!=mem.end())
            break;
            else
        mem.push_back(sum);
        x=sum;
        n=sum;
        num++;
            }
    if(sum==1)
        cout << num<<endl;
    else
        cout <<-1<<endl;
    return 0;
}
