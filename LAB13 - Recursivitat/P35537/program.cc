#include <iostream>
using namespace std;

bool es_creixent(int n, int prev){
    if(n <= prev) return true;
    return (prev >= n % 10) && es_creixent(n / 10, n % 10);
}

bool is_increasing(int n){
    return es_creixent(n / 10, n % 10);
}


int main() {
    int n;
    while (cin >> n) cout << (is_increasing(n) ? "true" : "false") << endl;
}
