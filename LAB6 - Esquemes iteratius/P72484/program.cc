#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int espais = n - 1;
  int est = 1;
  while(espais >= 0){
   for(int i = 0; i < espais; ++i) cout << " ";
   for(int i = 0; i < est; ++i) cout << "*";
   --espais;
   est = est + 2;
   cout << endl;
  }
  espais = 1;
  est = est - 4;
  while(espais < n){
    for(int i = 0; i < espais; ++i) cout << " ";
    for(int i = 0; i < est; ++i) cout << "*";
    ++espais;
    est = est - 2;
    cout << endl;
  }
  return 0;
}
