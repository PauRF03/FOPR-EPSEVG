#include<iostream>
using namespace std;

int main(){
   int n, c; 
   while(cin >> n){
      c = 0;
      while(n != 1){
         if(n % 2 == 0){
            n = n / 2;
         }else{
            n = n * 3 + 1;
         }
         ++c;
      }
      cout << c << endl;
   }
   return 0;
}
