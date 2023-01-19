#include <iostream>


using namespace std; //750A-New Year and Hurry

int main()
{
    int n , k;
    cin >> n;
    cin >> k;
    int x;
    int cnt = 0;
    x = 240 - k;
    int i , j;
    i = n*5;
    for (int j =5;j<=i;j+=5){
        if(x>=j){
            cnt++;
            x = x - j;
        }

    }
    cout << cnt ;
    return 0;
}

