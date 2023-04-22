#include <iostream>
using namespace std;

void cub(){
	double l, h, a;
	cin >> l >> h >> a;
	cout << l * h * a << endl;
}

void piramide(){
	double l, h, a;
	cin >> l >> h >> a;
	cout << (1.0 / 3.0) * l * a * h << endl;
}

void pentagon(){
	double l, a, ap;
	cin >> l >> a>> ap;
	cout << 2.5 * l * a * ap << endl;
}

int main(){
	char c;
	while(cin >> c){
		if(c == 'C'){
			cub();
		}else if(c == 'R'){
			piramide();
		}else if(c == 'P'){
			pentagon();
		}
	}
	return 0;
}