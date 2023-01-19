#include <iostream>
#include <algorithm>
#include <string>  

using namespace std;//1374A-Required Remainder

int main (){
  
  long long t;
  cin >>t;
  while(t--){
    long long x,y,n;
    cin >> x >> y >> n;
    long long w = (n-y) % x ;
    if(n-w<0)cout << n-w+n << endl;
    else cout << n-w << endl;
  }
  

  return 0;
}