#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, a, b, c;
    cin >> T;
    for(int i=1; i<=T; i++) {
        cout << "Case #" << i << ": ";
        cin >> a >> b >> c;
        if(a+b <= c || b+c <= a || c+a <= b) cout << "invalid!";
        else if(a == b && b == c) cout << "equilateral";
        else if(a == b || b == c || c == a) cout << "isosceles";
        else cout << "scalene";
        cout << "\n";
    }
}
