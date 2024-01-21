#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;
void transpose(Matrix& M){
  int n = M[0].size();
  vector<vector<int>> C(n, vector<int> (n));
  for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) C[i][j] = M[i][j];
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) M[j][i] = C[i][j];
}

int main () {
    int n;
    while (cin >> n) {
        vector<vector<int>> M(n, vector<int> (n));
        for (int i = 0; i < n; ++i) for (int  = 0; j < n; ++j) cin >> M[i][j];
        transpose(M);
        for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cout << M[i][j] << " ";
        cout << endl;   
        cout << endl;
    }
}

