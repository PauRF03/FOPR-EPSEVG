#include <iostream>
using namespace std;

int product_of_digits(int n){
	int res = 1;
	while(n >= 10){
		res = res * (n % 10);
		n = n / 10;
	}
	res *= n;
	return res;
}

int main(){
	int n;
	while(cin >> n){
		if(n >= 10){
			while(n >= 10){
				cout << "The product of the digits of " << n << " is ";
				n = product_of_digits(n);
				cout << n << "." << endl;
			}	
		}else{
			cout << "The product of the digits of " << n << " is " << n << "." << endl;
		}
		cout << "----------" << endl;
	}
	return 0;
}