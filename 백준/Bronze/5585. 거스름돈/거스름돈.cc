#include <iostream>
using namespace std;

int main() {
    int money, cnt = 0;
    cin >> money;
    money = 1000 - money;
    while(money) {
        if(money >= 500) money -= 500;
        else if(money >= 100) money -= 100;
        else if(money >= 50) money -= 50;
        else if(money >= 10) money -= 10;
        else if(money >= 5) money -= 5;
        else if(money >= 1) money -= 1;
        cnt++;
    }
    cout << cnt;
}
