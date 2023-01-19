#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>


using namespace std; //996A-Hit the Lottery


// 100 , 20 , 10 , 5 , 1

int main()
{
    int n ,cnt =0;
    cin >> n;
    while (n){
        if (n>=100){
            cnt++;
            n = n -100;
        }
        else if (n>= 20){
            cnt++;
            n = n- 20;
        }
        else if (n>= 10){
            cnt++;
            n = n- 10;
        }
        else if (n>= 5){
            cnt++;
            n = n- 5;
        }
        else {
            cnt++;
            n = n- 1;
        }
    }
    cout << cnt ;
    return 0;
}

