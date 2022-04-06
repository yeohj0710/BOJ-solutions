#include <iostream>
using namespace std;

int main() {
    int N, two = 0, five = 0, temp;
    cin >> N;
    for(int i=1; i<=N; i++) {
        temp = i;
        while(temp%2 == 0 || temp%5 == 0) {
            if(temp%2 == 0) temp/=2, two++;
            if(temp%5 == 0) temp/=5, five++;
        }
    }
    cout << (two<five?two:five);
}
