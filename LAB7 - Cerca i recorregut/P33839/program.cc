#include <iostream>

using namespace std;

int main(){
	int n;
	int digit = 0;
	while(cin >> n){
     int z = n;
     int s = 0;
	 while(z > 0){
       digit = z % 10;
       s = s + digit;
       digit = 0;
       z = z / 10;
	 }
	 cout << "The sum of the digits of " << n << " is " << s << "." << endl;
	}
}