#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a >= 10 && a <= 30){
        cout << "it's ok" << endl;
    }else if(a < 10 && a > 0){
        cout << "it's cold" << endl;
    }else if(a <= 0){
        cout << "it's cold" << endl << "water would freeze" << endl;
    }else if(a > 30 && a < 100){
        cout << "it's hot" << endl;
    }else{
        cout << "it's hot" << endl << "water would boil" << endl;
    }
    return 0;
} 
