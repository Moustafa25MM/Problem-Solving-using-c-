#include <iostream>
#include <algorithm>
#include <string>  

using namespace std;//151A-Soft Drinking

int main (){
 
  int n,k,l,c,d,p,nl,np ;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
  int x = (k * l) / nl ;
  int y = c*d ;
  int z = p / np ;
  int ans = 0;
  ans = min(min(x,y) , z );
  
  cout << ans/n << endl;

  return 0;
}