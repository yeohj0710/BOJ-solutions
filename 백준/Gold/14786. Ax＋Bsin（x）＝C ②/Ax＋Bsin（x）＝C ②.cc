#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(10);

    double A, B, C; cin >> A >> B >> C;

    double x_left = 0, x_right = 1e5, x;
    for(int i=0; i<100; i++) {
        x = (x_left + x_right)/2;

        double temp = A*x + B*sin(x);

        if(temp < C) x_left = x;
        else if(temp > C) x_right = x;
    }

    cout << x;
}
