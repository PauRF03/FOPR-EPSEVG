#include <iostream>
using namespace std;

int sum_of_digits(int n){
    if(n > 10){
        int res = (n % 10) + sum_of_digits(n / 10);
        return res;
    }else return n;
}

bool is_multiple_3(int n){
    int res = sum_of_digits(n);
    return res % 3 == 0;
}

int main() {
    int n;
    while (cin >> n) {
        cout << (is_multiple_3(n) ? "true" : "false") << endl;
    }
}
