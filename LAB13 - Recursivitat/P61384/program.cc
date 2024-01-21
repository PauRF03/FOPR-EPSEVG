#include <iostream>
using namespace std;

int double_factorial(int n){
    int res = 1;
    if(n != 0 && n != 1) res = n * double_factorial(n - 2);
    return res;
}

int main() {
  int x;
  while (cin >> x) cout << double_factorial(x) << endl;
}
