#include <bits/stdc++.h>

using namespace std;

int main()
{
    char braces[2050];
    int k=1;
    while(1){
        scanf("%s",braces);
        if(braces[0]=='-')
            break;
            int i=0,count=0,open=0;
        while(braces[i]){
            if(braces[i]=='{')
                open++;
            else{
                if(open==0 && braces[i]=='}'){
                    count++;
                    open++;
                }
                else{
                    open--;
                }

            }
            i++;
        }
        int res= count + (open/2);
        printf("%d. %d\n", k,res);
        k++;
    }

    return 0;
}
