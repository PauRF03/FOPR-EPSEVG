#include<iostream>
#include<vector>
using namespace std;

int main(){
  bool trobat = false;
  vector<char> lletres;
  int i = 0;
  int n = 0;
  char c;
  while(cin >> c && c != '.') lletres.push_back(c);
  for(i = 0; !trobat && i < lletres.size(); ++i) if(lletres[i] == 'h' && lletres[i + 1] == 'e' && lletres[i + 2] == 'l' && lletres[i + 3] == 'l' && lletres[i + 4] == 'o') trobat = true;
  if(trobat) cout<<"hello"<<endl;
  else cout<<"bye"<<endl;
}