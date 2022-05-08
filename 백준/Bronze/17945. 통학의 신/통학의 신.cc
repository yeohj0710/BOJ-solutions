#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    a *= 2;

    int x = (-a + sqrt(a*a - 4*b)) / 2;
    int y = (-a - sqrt(a*a - 4*b)) / 2;

    if(x != y) {
        if(x > y) swap(x, y);
        cout << x << " " << y << "\n";
    }
    else cout << x << "\n";
}
