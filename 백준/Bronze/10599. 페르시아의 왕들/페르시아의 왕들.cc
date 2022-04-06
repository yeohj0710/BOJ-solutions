#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    while(1) {
        cin >> a >> b >> c >> d;
        if(!a && !b && !c && !d) break;
        cout << c-b << " " << d-a << "\n";
    }
}
