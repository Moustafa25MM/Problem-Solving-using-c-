#include <iostream>
#include <math.h>


using namespace std;  // 486A - Calculating Function

int main()
{
    long long int n;
    cin >> n;
    long long int x;

    if (n%2 == 0){
        x = n/2 ;
    }
    else if (n%2 !=0){
        x = -(ceil(n/2.0));
    }
    cout << x;



    return 0;
}
