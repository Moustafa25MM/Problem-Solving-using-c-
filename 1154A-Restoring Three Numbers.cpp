#include <iostream>
#include <bits/stdc++.h>

using namespace std;//1154A-Restoring Three Numbers



int main()
{
   int a,b,c;
    int arr[4];
    for(int i{0} ; i < 4 ; i++){
        cin >> arr[i];
    }
    sort(arr,arr+4);
    for(int i{0};i<4;i++){
        a = arr[3] - arr[2];
        b = arr[0] - a;
        c = arr[1] - a;
    }
    cout << a <<" " << b << " " << c << endl;

    return 0;
}

