#include <iostream>



using namespace std; //581A-Vasya the Hipster

int main()
{
    int a,b;
    cin >> a >> b;
    int c = a;
    int d = b;
    int cnt = 0;
    int x = 0;
    if ( a== b){
        cnt = a;
    }
    else{
        while(a){
            if(a>b && b>=1){
                cnt++;
                b--;
            }
            else if (b>a){// 2 3
                cnt++;
                b--;
            }
            a--;
        }
        a = c - d;
        b = d - c ;
        while(a>=2 || b>=2){
            x++;
            a = a-2;
            b = b-2;
        }
    }

    cout << cnt << " " << x;
    return 0;
}

