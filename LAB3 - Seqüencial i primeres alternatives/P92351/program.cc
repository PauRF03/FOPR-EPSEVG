#include <iostream>
using namespace std;

int main(){
  int a, b;
  int d = 0;
  int r = 0;
  cin >> a >> b;
  if(b > 0){
    d = a / b;
    r= a % b;
    if(r < 0 && a < 0){
      d = d - 1;
      r = r + b;
    }
    cout << d << " " << r << endl;
  }
  return 0;
}
