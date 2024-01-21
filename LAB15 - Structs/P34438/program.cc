#include <typeinfo>
#include <iostream>    
#include <string>    
#include <vector>    
using namespace std;

struct Province {
    string name;
    string capital;
    int population;
    int area;
    double gdp;
};

struct Country {
    string name;
    string capital;
    vector<Province> provs;
};

typedef vector<Country> Countries;

int population(const Countries& p, double x){
    int res = 0;
    for(int i = 0; i < p.size(); ++i){
        int a = 0;
        for(int j = 0; j < p[i].provs.size(); ++j){
            if(p[i].provs[j].gdp <= x) ++a;
            if(a == 2){
                for(int j = 0; j < p[i].provs.size(); ++j) res += p[i].provs[j].population;
                break;
            }
        }
    }
    return res;
}


int main () {
    int n;
    cin >> n;
    Countries p(n);
    for (int i=0; i<n; ++i) {
        int np;
        cin >> p[i].name >> p[i].capital >> np;
        p[i].provs = vector<Province>(np);
        for (int j=0; j<np; ++j) {
            cin >> p[i].provs[j].name >> p[i].provs[j].capital >> 
                p[i].provs[j].population >> p[i].provs[j].area >> 
                p[i].provs[j].gdp
            ;            
        }
    }
    for (double x = 0; x<5000; x+=100) {
        cout << population(p,x) << endl;
    }
}
