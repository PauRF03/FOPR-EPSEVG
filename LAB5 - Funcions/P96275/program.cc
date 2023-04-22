#include<iostream>
using namespace std;

int absolute(int x){
  if(x < 0) x *= -1;
  return x;
}

int main(){
  int n;
  cin>>n;
  n=absolute(n);
  cout<<n<<endl;
}
