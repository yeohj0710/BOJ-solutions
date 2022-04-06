#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, a, b; cin >> x >> a >> b;

    while(true) {
        x -= a;
        if(x < 0) {
            cout << "1";
            return 0;
        }

        x -= b;
        if(x < 0) {
            cout << "0";
            return 0;
        }
    }
}
