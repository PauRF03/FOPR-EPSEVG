#include <iostream>
using namespace std;

int main(){
  int cops;
  while(cin >> cops){
    int fet = 1;
    int major = 0;
    int n = 0;
    while(fet <= cops){
      cin>>n;
      if(fet == 1) major = n;
      if(n >= major) major=n;  
      fet += 1;
    }
    cout<<major<<endl;
  }
}