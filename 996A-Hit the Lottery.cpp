#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>


using namespace std; //996A-Hit the Lottery


// 100 , 20 , 10 , 5 , 1

int main()
{
    int n;
    cin >> n;
    int ans = n/100;
    int x = n%100;

    ans+= x/20;
    x = n%20;

    ans+= x/10;
    x = n%10;

    ans+= x/5;
    x = n%5;

    ans+= x/1;

    cout << ans;
    return 0;
}

