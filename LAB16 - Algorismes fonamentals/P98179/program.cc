#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {
    if (v.size() > 1) {
        double x = v[v.size() - 1];
        for (int i = v.size() - 1; i > 0; --i) {
            if(x < v[i-1]) {
                v[i] = v[i - 1];
                v[i - 1] = x;
            }
        }
    }
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        insert(V);
        for (int i = 0; i < n; ++i) cout << " " << V[i];
        cout << endl;
    }
    return 0;
}