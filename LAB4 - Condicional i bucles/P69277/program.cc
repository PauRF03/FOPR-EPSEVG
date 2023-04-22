#include<iostream>
using namespace std;

int main(){
  int n;
  int m = 0;
  cin >> n;
  while(m < n){
    cout<< m * m * m << ',';
    m = m + 1;
    if(m == n) {
      cout << m * m * m << endl;
    }
  }
  if(n == 0){
    cout << '0' << endl;
  }
  return 0;
}