#include <iostream>
using namespace std;

int main(){
    int n, x, cont = 0;
    char c = '_';
    cin >> n;
    n *= 2;
    int r, digitCentral, digitControl, aux, comptador;
    while (n > 0){
        cin >> x;
        aux = x;
        cont++;
        comptador = 0;
        while (aux > 0){
            comptador++;
            aux /= 10;
        }
        if (comptador == 0) r = 0;
        else {
            if (comptador % 2 == 1) digitCentral = (comptador / 2) +1;
            else { 
                if (cont%2 == 0) c = 'A';
                else c = 'B';
                break;
            }
            while (digitCentral > 0){
                r = x % 10;
                x = x / 10;
                digitCentral--;
            }  
        }
        if (cont == 1) digitControl = r;
        if (r != digitControl) {
            if (cont%2 == 0)c = 'A';
            else c = 'B';
            break;
        }
        n--;
    }  
    if (c == '_') cout << "=" << endl;
    else cout << c << endl;
}