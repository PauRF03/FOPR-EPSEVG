#include<iostream>
using namespace std;

int main(){
  int n, m, c, d, u;
  int p = 0;
  cin >> n;
  if(n >= 1800 and n <= 9999){
    m = n / 1000;
    c = (n % 1000) / 100;
    d = ((n % 1000) % 100) / 10;
    u = n % 1000 % 100 % 10;
    if(d != 0 and u != 0){
      if(n % 4 == 0){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }else if(d == 0 and u == 0){
      p = m * 10 + c;
      if(p % 4 == 0){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }else if((d == 0 and u != 0) or (d != 0 and u == 0)){
      if(n%4 == 0){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
