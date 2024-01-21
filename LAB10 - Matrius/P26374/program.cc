#include <vector>
#include <iostream>
using namespace std;

typedef vector<vector<int>> Matrix;
Matrix sum(const Matrix& a, const Matrix& b){
   int n = a.size();
   Matrix C(n, vector<int>(n));
   for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) C[i][j] = a[i][j] + b[i][j];
   return C;
}

int main () {
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        Matrix B(n, vector<int>(n));
        for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> A[i][j];
        for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> B[i][j];
        Matrix C = sum(A, B);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cout << C[i][j] << " ";
            cout << endl;
        }   
        cout << endl;
    }
}

