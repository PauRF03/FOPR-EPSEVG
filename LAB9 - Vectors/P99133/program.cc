#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse(string &s){
	for(int i = 0; i < s.size() / 2; ++i) swap(s[i], s[s.size() - i - 1]);
	return s;
}

int main(){
	int n;
	cin >> n;
	vector<string> v;
	for(int i = 0; i <= n; ++i){
		string s;
		getline(cin,s);
		v.push_back(s);
	}
	for(int i = 0; i <= n; ++i){
		v[i] = reverse(v[i]);
	}
	for(int i = n; i != 0; --i){
		cout << v[i] << endl;
	}
}