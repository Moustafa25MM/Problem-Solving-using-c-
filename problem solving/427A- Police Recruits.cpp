#include <iostream>
#include <bits/stdc++.h>


using namespace std; // 427A- Police Recruits

int main()
{
    int n;
    cin >>n;
    int x;
    int cnt = 0;
    int a = 0;
    for(int i =0; i<n;i++){
        cin >> x;
        if(x>0){
            a+=x;
        }
        else{
            if(a<1){
                cnt++;
            }
            else{
                a--;
            }
        }

    }
    cout << cnt;
    return 0;
}

