#include <iostream>



using namespace std;  // 200B-Drinks

int main()
{
    int n;
    cin >> n;
    int x;
    float sum =0;
    for (int i=0;i<n;i++){
        cin >> x;
        sum += x;
    }
    cout << sum/n ;


    return 0;
}
