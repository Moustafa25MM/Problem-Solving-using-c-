#include <iostream>
//#include <bits/stdc++.h>

using namespace std;//472A-Design Tutorial: Learn from Math



int main()
{
  int n;
  cin >> n;
  if(n % 2 ==0){
    cout << 4 << " " << n-4 << endl;
  }
  else{
    cout << 9 << " " << n-9 << endl;
  }
    return 0;
}

