#include <iostream>
#include <bits/stdc++.h>


using namespace std;//1399A-Remove Smallest



int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int arr[n];
        for(int i =0; i < n ; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        bool isTrue = true;
        for (int j = n-1 ; j > 0 ; j--){
            if(arr[j] - arr[j-1] > 1){
                isTrue = false;
                break;
            }
        }
        if(isTrue){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}

