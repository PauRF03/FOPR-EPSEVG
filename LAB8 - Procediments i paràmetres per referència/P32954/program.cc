#include <iostream>
using namespace std;

void sort3(int& a, int& b, int& c){
   int n = 0;
   if(a > b && a > c){
    n = c;
    c = a;
    if(b > n){
      a = b;
      b = n;
    }else{
      b = b;
      a = n;
    }
  }
  if(a > b && a < c){
    n = a;
    a = b;
    b = n;
    c = c;   
  }
  if(a < b && a < c){
    a = a;
    if(c > b){
      c = c;
      b = b;
    }else{
      n = b;
      b = c;
      c = n;
    }
  }
  if(a < b && a > c){
    n = a;
    a = c;
    c = b;
    b = n;
  }
  if(a == b && a > c){
    n = a;
    a = c;
    c = n;
  }
  if(a > b && a == c){
    n = a;
    a = b;
    b = n;
  }
  if(a < b && a == c){
    n = b;
    a = a;
    b = c;
    c = n;
  }
}  
     
int main() {
  int x, y, z;
  while (cin >> x >> y >> z) {
    sort3(x, y, z);
    cout << x << ' ' << y << ' ' << z << endl;
  }
}
