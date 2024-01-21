#include <iostream>
using namespace std;

int main(){
  int n;
  int m = 1;
  cin >> n;
  while(m <= 10){
    cout << n << '*' << m << ' ' << '=' << ' ' << n * m << endl;
    m = m + 1;
  }
  return 0;
}