#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>


using namespace std; //141A-Amusing Joke




int main()
{
    string first,second,third,final;
    cin >> first>>second>>third;
    final = first + second;
    sort(final.begin(),final.end());
    sort(third.begin(),third.end());
    if(final == third)cout << "YES";
    else cout << "NO";

    return 0;
}

