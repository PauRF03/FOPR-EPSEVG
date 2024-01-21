#include <iostream>
using namespace std;

int main(){
  char lletra;
  cin >> lletra;
  if('A' <= lletra &&  lletra <= 'Z') cout << "uppercase" << endl;
  else cout << "lowercase" <<endl;

  if((lletra == 'a') || (lletra == 'e') || (lletra == 'i') || (lletra == 'o') || (lletra == 'u') || (lletra == 'A') || (lletra == 'E') || (lletra == 'I') || (lletra == 'O') || (lletra == 'U')) cout << "vowel" << endl;
  else cout << "consonant" << endl;
  
  return 0;
}
