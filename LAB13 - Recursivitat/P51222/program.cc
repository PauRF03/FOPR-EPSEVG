#include <iostream>
using namespace std;

int number_of_digits(int n){
  int r = 0;
  if(n < 10) r = 1;
  else r = 1 + number_of_digits(n / 10);
  return r;
}

int main () {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
}

