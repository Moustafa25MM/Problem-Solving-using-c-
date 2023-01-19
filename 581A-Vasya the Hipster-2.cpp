#include <iostream>



using namespace std; //581A-Vasya the Hipster-2

int main()
{
    int a,b;
    cin >> a >> b;
    int x = 0 , y = 0;
    int k = min(a,b);
    x = k ;
    a = a - k;
    b = b - k;
    while(a>1){
        y++;
        a = a-2;
    }
    while(b>1){
        y++;
        b=b-2;
    }
    cout << x << " " << y;
    return 0;
}

