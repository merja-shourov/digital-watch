#include<bits/stdc++.h>
using namespace std;

void displayWatch(int h, int m, int s);
int main(){
    int hour, min, sec;
    cout << "SET YOUR TIME: " << endl;
    cout << "Hour   : ";
    cin >> hour;
    cout << "Minute : ";
    cin >> min;
    cout << "Secound: ";
    cin >> sec;

    while(true){
        sleep(1);
        sec++;
        if( sec > 59 ){
            sec = 0;
            min++;
        }
        if( min > 59 ){
            sec = 0;
            min = 0;
            hour++;

        }
        if( hour > 12 ){
            sec = 0;
            min = 0;
            hour = 1;
        }
        displayWatch(hour, min, sec);
    }
    
    return 0;
}

void displayWatch(int h, int m, int s){
    system("clear"); // for windows: system("cls");
   
    cout << "Current Time:" << endl;
    cout << h << " : " << m << " : " << s << endl;
}