#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int h, m, s;
	cin >> h >> m >> s;
	++s;
	if(s == 60){
		s = 0;
		++m;
		if(m == 60){
			m = 0;
			++h;
			if(h == 24) h = 0;
		}
	}
	cout << setfill('0') << setw(2) << h << ":";
	cout << setfill('0') << setw(2) << m << ":";
	cout << setfill('0') << setw(2) << s << endl;
	return 0;
}