#include <iostream>
#include <stack>


using namespace std;  // 344A-Magnets

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    stack<int> magnet;
    magnet.push(x);

    for (int i=1;i<n;i++){
        cin >> x;
        if(magnet.top()==x)continue;
        else magnet.push(x);

    }
    cout << magnet.size();
    return 0;
}
