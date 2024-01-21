#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	int suma = 0;
	cin >> n;
	vector<int> v(n);
	int i = 0;
	while(i < n){
		cin >> v[i];
		++i;
	}
		--n;
		--i;
	while(i >= 0) if(v[n] == v[i]) suma++;
	--i;
	cout << suma - 1 << endl;
}