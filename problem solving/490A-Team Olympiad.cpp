#include <iostream>
#include <algorithm>
#include <string>  

using namespace std;//490A-Team Olympiad

int main (){
  
  int n;
  cin >> n;
  int arr1[5001] , arr2[5001] ,arr3[5001];
  int a1=0,a2=0,a3=0 ;
  for(int i = 1;i <= n ; i ++){
    int num;
    cin >> num ; // 1 3 1 3 2 1 2
    if(num == 1){arr1[a1] = i , a1++ ;}
    else if(num == 2) {arr2[a2] = i , a2++ ;}
    else{arr3[a3] = i , a3++ ;}
  }
  int a = min(min(a1,a2) , a3 ) ;
  cout << a << endl;
  if(a >=1 ){
    for(int i=0;i<a;i++){
      cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
    }
  }
  

  return 0;
}