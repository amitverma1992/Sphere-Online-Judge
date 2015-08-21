#include <iostream>

using namespace std;
int arr[100+9][100+9];
int h,w;

int main()
{
    int tc;
    cin >> tc;
    while(tc--){

        cin >>h>>w;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                cin >> arr[i][j];
            }
        }
        for (int i = 1; i <= h; i++)
			arr[i][w+1] = 0;

			for(int i=h-1;i>0;i--){
                for(int j=1;j<=w;j++){
                    arr[i][j]=arr[i][j] + max(max(arr[i+1][j-1],arr[i+1][j]),arr[i+1][j+1]);

                }
			}
			int max1=0;
			for(int i=1;i<=w;i++)
                max1=max(max1,arr[1][i]);

            cout <<max1<<endl;


    }


    return 0;
}
