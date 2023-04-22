#include <iostream>
using namespace std;

int main(){
	char c;
	double mg;
	int edat;
	while(cin >> c){
		if(c == 'p'){
			cin >> mg;
			if(mg > 0.15){
				cout << "Ha de ser sancionat" << endl;
			}else{
				cout << "Pot continuar conduint" << endl;
			}
		}else if(c == 'n'){
			cin >> mg >> edat;
			if((edat < 2 and mg <= 0.15) or (edat >= 2 and mg <= 0.25)){
				cout << "Pot continuar conduint" << endl;
			}else{
				cout << "Ha de ser sancionat" << endl;
			}
		}
	}
}