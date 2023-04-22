#include<iostream>
using namespace std;

int main(){
  char lletra;
  cin >> lletra;
  if('A' <= lletra and  lletra <= 'Z'){
      cout << "uppercase" << endl;
  }else{
      cout << "lowercase" <<endl;
  }
  if((lletra == 'a') or (lletra == 'e') or (lletra == 'i') or (lletra == 'o') or (lletra == 'u') or (lletra == 'A') or (lletra == 'E') or (lletra == 'I') or (lletra == 'O') or (lletra == 'U')){
     cout << "vowel" << endl;
  }else{
     cout << "consonant" << endl;
  }
  return 0;
}
