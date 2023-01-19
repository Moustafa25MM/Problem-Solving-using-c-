#include <iostream>
#include <bits/stdc++.h>

using namespace std;//469A -I Wanna Be the Guy

int main()
{
     int n;
     cin >> n;
     int arr[n+1];
     int p,q,level;
     cin >> p;
     for (int i =0;i<p;i++){
        cin >> level;
        arr[level] = 1;
     }
     cin >> q;
     for (int i =0;i<q;i++){
        cin >> level;
        arr[level] = 1;
     }
     for (int i =1; i <= n ; i++){
        if(arr[i]!= 1){
            cout << "Oh, my keyboard!";
            return 0;
        }
     }
    cout << "I become the guy." ;



    return 0;
}

