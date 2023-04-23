#include <iostream>
using namespace std;

void count_and_add(int& num, int& sum){
  int n;
  num++;
  sum = 0;
  while(cin >> n){
    ++num;
    sum += n; 
  }
}

int main() {
  int num = -1;
  int sum = -33;
  count_and_add(num, sum);
  cout << num << ' ' << sum << endl;
}
