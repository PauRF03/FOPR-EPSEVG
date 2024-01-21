#include <iostream>
#include <vector>
using namespace std;

bool is_palindromic(int n){
    vector<int> res;
    if(n >= 10){
        while(n >= 10){
            res.push_back(n % 10);
            n = n / 10;
        }
        res.push_back(n);
    }else res.push_back(n);
    for(int i = 0; i <= res.size() / 2; ++i) if(res[i] != res[res.size() - i - 1]) return false;
    return true;
}

int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
