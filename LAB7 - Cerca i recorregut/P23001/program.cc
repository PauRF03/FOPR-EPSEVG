#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string> vec;
	string s,l;
	int res, actual;
	getline(cin,s);
	for(int i = 0; i < s.size(); ++i){
		if(s[i]==' ' && s[i+1]!=' '){
			vec.push_back(l);
			while(l.size() != 0){
				l.pop_back();
			}
		}else l.push_back(s[i]);
	}
	vec.push_back(l);
	actual = 0;
	res = 0;
	for(int i = 0; i < vec.size(); ++i){
		if(vec[i] == vec[0]) actual++;
		else {
			if(res < actual) res=actual;
			actual = 0;
		}
	}
	if(res < actual) res = actual;
	cout << res << endl;
}