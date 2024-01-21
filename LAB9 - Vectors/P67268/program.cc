#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n;
	int c = 0;
	while(cin >> n){
		if(n != 0){
			vector<int> s(n);
			for(int i = 0; i < n; ++i){
				cin >> c;
				s[i] = c;
			}
			for(int i = n - 1 ;i > 0; --i) cout << s[i] << " ";
			cout << s[0];
		}
		cout << endl;
	}
}