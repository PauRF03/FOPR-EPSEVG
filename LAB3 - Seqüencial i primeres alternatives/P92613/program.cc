#include<iostream>
using namespace std;

int main(){
  double n;
  cin >> n;
  int nd = n;
  double r;
  r = n - nd;
  if(n - nd != 0){
    if(r >= 0.5) cout << nd << " " << nd + 1 << " " << nd + 1 << endl;
    else cout << nd << " " << nd + 1 << " " << nd << endl;
  }else cout << nd << " " << nd << " " << nd << endl; 
  return 0;
}
