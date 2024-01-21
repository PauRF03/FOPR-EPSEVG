#include <iostream>
using namespace std;

void cross(int n, char c){
  if(n >= 3 && n % 2 == 1){
    for(int i = 0; i < n; ++i){
      if(i == n / 2){
        for(int j = 0; j < n; ++j) cout << c;
        cout << endl;
      }else{
        for(int j = 0; j < n / 2; ++j) cout << " ";
        cout << c << endl; 
      } 
    }
  }
}

int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
}
