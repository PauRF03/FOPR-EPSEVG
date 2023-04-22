#include<iostream>
using namespace std;

int main(){
  int n;
  int b = 0;
  cin >> n;
  while(n >= 1){
    b = b + (n * n);
    n = n - 1;
  }
  cout << b << endl;
  return 0;
}


     
     
