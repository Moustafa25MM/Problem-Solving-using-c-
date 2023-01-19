#include <iostream>

using namespace std; //1335A-Candies and Two Sisters

int main()
{
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==1 || n == 2)cout << 0 << endl;
        else cout << (n-1)/2 << endl;
    }

    return 0;
}

