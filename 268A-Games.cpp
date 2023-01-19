#include <iostream>

using namespace std; // 268A-Games


int main()
{
    int n,cnt=0;
    cin >> n;
    int h[n];
    int a[n];

    for (int i=0;i<n;i++){
        cin >> h[i] ;
        cin >> a[i] ;
    }
    for (int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(h[i] == a[j]){
                cnt ++;
            }

        }
    }
    cout << cnt;
    return 0;
}

