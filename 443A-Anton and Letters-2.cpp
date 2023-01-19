#include <iostream>
#include <bits/stdc++.h>

using namespace std; //443A-Anton and Letters




int main()
{
    string c;
    getline(cin,c);
    set<char> s;
    for (int i = 0; i < c.size() ;i++){
        if(isalpha(c[i])){
            s.insert(c[i]);
        }
    }
    cout << s.size();

    return 0;
}

