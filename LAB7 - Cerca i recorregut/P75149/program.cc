#include <iostream>
#include <string>
using namespace std;

int main(){
   string n;
   int p = 0;
   bool trobat = false;
   int a = 0;
   getline(cin, n);
   while(!trobat && a < n.length()){
   	if(n[a] == 'a') trobat = true;
   	else ++a;
   }  
   if(trobat) cout << "yes" << endl;
   else cout << "no" << endl;
}
