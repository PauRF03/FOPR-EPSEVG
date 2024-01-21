#include <iostream>

using namespace std;

int main(){
	int n;
	int m = 0;
	bool trobat = false;
	while(!trobat && cin>>n ){
		if(n % 2 == 0) trobat = true;
		++m;
	}
	cout << m << endl;
}