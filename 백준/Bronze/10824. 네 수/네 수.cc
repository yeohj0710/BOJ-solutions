#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    string N = a+b, M = c+d;
    cout << stoll(N)+stoll(M);
}
