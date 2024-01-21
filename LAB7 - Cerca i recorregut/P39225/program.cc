#include <iostream>
using namespace std;
#include <vector>

int main(){
	int n, i;
	vector<int> nombres;
	cin >> i;
	while(cin >> n && n != -1) nombres.push_back(n);
	cout << "At the position " << i << " there is a(n) " << nombres[i-1] << "." << endl;
}
