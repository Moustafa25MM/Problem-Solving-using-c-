#include <iostream>


using namespace std;//732A-Buy a Shovel




int main()
{
    int k,r;
    cin >> k >> r;
    int x = k;
    int Min = 0;
    while(k%10 != r && k%10 != 0){
        k = k+x;
        Min ++;
    }
    Min++;
    cout << Min;

    return 0;
}

