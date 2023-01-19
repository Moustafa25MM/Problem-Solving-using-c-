#include <iostream>
using namespace std;//1343A-Balanced Array

int main (){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a = n/2;
    if(a % 2 != 0){
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
      int even = 2;
      for(int i = 1 ; i<= a ; i++){
        cout << even << " " ;
        even = even + 2;
      }
      even = even - 2;
      int odd = 1;
      for (int i = 1 ; i < a ; i++ ){
        cout << odd << " " ;
        odd = odd + 2;
      }
      cout << even + a - 1 << endl;
    }
  }
  

  return 0;
}