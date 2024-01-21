#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		vector<int> vec;
		int m;
		int suma = 0;
		for(int i = 0; i < n; ++i){
			cin >> m;
			suma += m;
			vec.push_back(m);
		}
		bool trobat = false;
		for(int i = 0; !trobat && i < vec.size(); ++i){
			suma -= vec[i];
			if(suma == vec[i]) trobat=true;
			else suma += vec[i];
		}
		if(trobat) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}