#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int n = 0;
    getline(cin, s);
	int i = 0;
	while(i < s.length()){
		if(s[i]=='a') ++n;
		++i;
	}
	cout << n << endl;
}