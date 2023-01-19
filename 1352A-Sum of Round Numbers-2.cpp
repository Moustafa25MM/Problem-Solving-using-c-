#include <iostream>
#include <bits/stdc++.h>

using namespace std; //1352A-Sum of Round Numbers-2




int main()
{
    int t;
    cin >> t;
    vector<int> v;
    int n;
    while(t--){
        cin >> n;
        int cnt=0;
        while(n != 0){
           int  x = n%10;
            n = n/10;
            if(x==0){
                cnt++;
                continue;
            }
            for(int i =1;i<= cnt ;i++){
                x = x*10;
            }
            cnt++;
            v.push_back(x);
        }
        cout << v.size() << endl;
        for(int i =0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
    return 0;
}

