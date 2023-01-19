#include <iostream>
#include <cstring>

using namespace std;//1367A-Short Substrings



int main (){
  int t;
  cin >> t;
  while(t){
    string b;
    cin >> b;
    for(int i = 0 ; i< b.length() ; i+=2){
      cout << b[i] ;
    }
    cout << b[b.length() - 1] <<endl;
    t--;
  }



  return 0;
}