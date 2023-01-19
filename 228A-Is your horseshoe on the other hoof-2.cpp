#include <iostream>
#include <bits/stdc++.h>

using namespace std; // 228A-Is your horseshoe on the other hoof-2




int main()
{
    int a;
    set<int> s;
    for (int i=0;i<4;i++){
        cin >> a;
        s.insert(a);
    }
    cout << 4 - s.size() ;


    return 0;
}

