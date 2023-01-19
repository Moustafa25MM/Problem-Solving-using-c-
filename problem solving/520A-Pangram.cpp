#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>


using namespace std; // 520A-Pangram




int main()
{
    int n;
    cin >> n;
    string c;
    cin >> c;
    set<char> s;
    for (int i=0;i<n;i++){
        c[i] = toupper(c[i]);
        s.insert(c[i]);
    }

    if(s.size() == 26)cout << "YES";
    else cout << "NO";

    return 0;
}

