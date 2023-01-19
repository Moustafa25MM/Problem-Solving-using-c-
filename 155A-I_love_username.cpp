#include <iostream>


using namespace std; //155A-I_love_%username%



// 100 50 200 150 200           Max = 2 x = 200
//                              Min = 1 y = 50
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int Max,Min;
    int x =0 , y = 10000 ;
    int cnt = 0;
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }
    Max = Min = arr[0];
    for (int i =1; i<n; i++){
        if(arr[i] > Max){
            Max = arr[i];
            cnt ++ ;
        }
        else if (arr[i] < Min){
            Min = arr[i];
            cnt ++ ;
        }

    }
    cout << cnt ;
    return 0;
}

