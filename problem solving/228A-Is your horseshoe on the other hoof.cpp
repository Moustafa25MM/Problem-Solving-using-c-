#include <iostream>



using namespace std; // 228A-Is your horseshoe on the other hoof




int main()
{
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int x = 0;
    int z = 0;
    int v = 0;
    if (a == b || a== c || a==d)x++;
    if (b ==c || b==d )z++;
    if (c==d)v++;
    cout << x + z + v;

    return 0;
}

