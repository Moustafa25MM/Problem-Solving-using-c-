#include <iostream>


using namespace std; //510A-Fox And Snake




int main()
{

    int n,m;
    cin >> n >> m;
    for (int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2 != 0 ){
                cout << "#" ;
            }
            else if(i%2 == 0 && i%4 != 0){
                int x = m ;
                x --;
                while(x--){
                    cout << ".";
                }
                cout << "#";
                break;
            }
            else if (i%2 ==0 && i%4 == 0){
                int x = m ;
                x --;
                cout << "#";
                while(x--){
                    cout << ".";
                }

                break;
            }

        }
        cout << endl;
    }


    return 0;
}

