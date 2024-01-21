#include <iostream>

using namespace std;

int main(){
	string s;
	int n = 0;
	bool punt = false;
	getline(cin, s);
	for(int i = 0; !punt && i < s.size(); ++i){
		if(s[i] == 'a') ++n;
		if(s[i] == '.' && i != s.size() - 1) punt=true;
	}
	cout << n << endl;
}