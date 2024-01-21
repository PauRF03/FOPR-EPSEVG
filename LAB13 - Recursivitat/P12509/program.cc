#include <iostream>
using namespace std;


int factorial(int n){
   int res = 0;
   if(n == 0) res = 1;
   else res = n * factorial(n - 1);
   return res;
}

int main() {
    int x;
    while (cin >> x) cout << factorial(x) << endl;
}