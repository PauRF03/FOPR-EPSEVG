#include <iostream>
using namespace std;

int main(){
  int b, p, s;
  int fet = 0;
  while(cin >> b >> p){
    if(b != 0 && p != 0){
      s = 1;
      fet = 0;
      while(fet < p){
        s *= b;
        fet++;
      }
    }else if(b == 0 and p != 0) s = 0;
    else s = 1;
    cout << s << endl;
  }
  cin >> b >> p;
}