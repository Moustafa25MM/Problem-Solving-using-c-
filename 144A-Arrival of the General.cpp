#include <iostream>


using namespace std;//144A-Arrival of the General

int main()
{
   int n;
   cin >> n;
   int arr[n+1];
   int Max,Min ,x=0 , y = 101;
   for(int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i] > x){
            x = arr[i];
            Max = i;
        }
        if (arr[i] <= y){
            y = arr[i];
            Min = i;
        }

   }
   if(Max > Min)Min++;
   cout << (Max) + (n-1-Min);





    return 0;
}

