#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<vector<int>> Matriu;

int main(){
  int n = 0;
  int m = 0;
  string s;
  cin >> n >> m;
  Matriu mat(n, vector<int> (m));
  int k = 0;
  for(int i = 0; i < n; ++i) 
    for(int j = 0; j < m; ++j){
      cin >> k;
      mat[i][j] = k;
    }
  }
  while(cin >> s){ 
    int fil = 0;
    int col = 0;
    k = 0;
  if(s == "row"){
    cin >> k;
    cout << "row " << k << ": ";
    for(int j = 0; j < m; ++j){
      if(j == m - 1) cout << mat[k-1][j] << endl;
      else cout << mat[k-1][j] << " ";
    }
  }else if(s == "column"){
    cin >> k;
    cout << "column " << k << ": ";
    for(int i = 0;i < n; ++i){
      if(i == n-1) cout << mat[i][k-1] << endl;
      else cout << mat[i][k-1] << " ";
    }
  }else if(s == "element"){
    cin >> fil >> col;
    cout << "element " << fil << " " << col << ": "<< mat[fil-1][col-1] << endl;
  }
}