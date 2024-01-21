#include <iostream>
using namespace std;

int main(){
   int n = 0;
   cin >> n;
   int altura = n;
   int amplada = 0;
   while(altura > 0){
      while(amplada < n){
         cout << n;
         amplada++;
      }
      cout << endl;
      amplada = 0;
      altura--;
   }
   while(cin >> n){
      cout << endl;
      altura = n;
      amplada = 0;
      while(altura > 0){
         while(amplada < n){
            cout << n;
            amplada++;
         }
         cout << endl;
         amplada = 0;
         altura--;
      }
   }
   return 0;
}