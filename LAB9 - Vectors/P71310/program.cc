#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v){
  double sc = 0;
  int c = 0;
  while(c < v.size()){
    sc += (u[c] * v[c]);
    ++c;
  }
  return sc;
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> u(n);
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> u[i];
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << scalar_product(u, v) << endl;
    }
}

