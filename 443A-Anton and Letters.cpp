#include <iostream>
#include <bits/stdc++.h>

using namespace std; // 443A-Anton and Letters




int main()
{
    int cnt = 0;
    string c;
    getline(cin,c);
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
        if(c[i] == '{' || c[i] == '}'|| c[i] == ',' || c[i] == ' '){
            continue;
        }
        else{
            if(c[i] != c[i+1]){
                cnt ++;
            }
        }

    }
    cout << cnt ;

    return 0;
}

