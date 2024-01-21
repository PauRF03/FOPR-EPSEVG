#include <iostream>
using namespace std;

int main(){
  int cops;
  while(cin >> cops){
    int fet = 0;
    int major = 0;
    int n = 0;
    while(fet < cops){
      cin >> n;
      if(fet == 0) major = n;
      if(n >= major) major = n;  
      fet++;
    }
    cout << major << endl;
  }
  return 0;
}