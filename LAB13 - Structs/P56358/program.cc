#include <iostream>

using namespace std;

struct Time {
    int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2){
    t1 = t;
    t2 = t;
    t1.second++;
    t2.second--;
    if(t1.second >= 60){
        t1.second = 0;
        t1.minute++;
        if(t1.minute >= 60){
            t1.minute = 0;
            t1.hour++;
            if(t1.hour >= 24) t1.hour = 0;
        }
    }
    if(t2.second < 0){
        t2.second = 59;
        t2.minute--;
        if(t2.minute < 0){
            t2.minute = 59;
            t2.hour--;
            if(t2.hour < 0) t2.hour = 23;
        }
    }
}

int main(){
    Time t, t1, t2;
    while(cin >> t.hour >> t.minute >> t.second){
        one_second(t, t1, t2);
        cout << t1.hour << " " << t1.minute << " " << t1.second << endl;
        cout << t2.hour << " " << t2.minute << " " << t2.second << endl;
    }
}