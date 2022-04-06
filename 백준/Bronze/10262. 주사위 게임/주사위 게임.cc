#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b, c, d; cin >> a >> b >> c >> d;
    double p1 = a + (b-a)/2 + c + (d-c)/2;

    double e, f, g, h; cin >> e >> f >> g >> h;
    double p2 = e + (f-e)/2 + g +(h-g)/2;

    if(p1 > p2) cout << "Gunnar";
    else if(p1 < p2) cout << "Emma";
    else cout << "Tie";
}
