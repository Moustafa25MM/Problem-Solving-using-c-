#include <iostream>
#include <algorithm>
#include <string>  

using namespace std;//758A-Holiday Of Equality

int main (){
  int n ;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i] ;
  }
  sort(arr,arr+n);
  int a = arr[n-1] ;
  int count = 0;
  for(int i=0;i<n;i++){
    if(a > arr[i] ){count = count + a - arr[i] ;}
  }
  cout << count << endl;
  return 0;
}