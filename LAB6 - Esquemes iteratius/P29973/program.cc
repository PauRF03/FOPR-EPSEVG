#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  int cops = 0;
  string b = "*";
  cin >> n;
  while(cops < n){
    cout << b << endl;
    b = b + "*";
    cops++;
  }
  return 0;
}