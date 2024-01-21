#include <iostream>
#include <cmath>
using namespace std;

bool is_perfect(int n) {
    int sum = 1;
    for (int i = 2; i < sqrt(n); ++i) if(n % i == 0) sum += i + (n / i);
    if(sum == n and n != 1) return true;
    else return false;
}

int main () {
    int n;
    while (cin >> n) {
        if (is_perfect(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}