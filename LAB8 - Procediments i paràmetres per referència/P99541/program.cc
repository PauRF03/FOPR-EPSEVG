#include <stdio.h>
#include<iostream>
using namespace std;

void print(int s, char c, int n){
  int r = 0;
  while(r < s){
    cout << " ";
    ++r;
  }
  r = 0;
  while(r < n){
    cout << c;
    ++r;
  }
  cout << endl;
}

int main() {
  int s, n;
  char c;
  while (scanf("%d %c %d", &s, &c, &n) > 0) print(s, c, n);
}
