#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        double a; cin >> a;
        if(a == -1) break;

        cout << "Objects weighing " << a << " on Earth will weigh " << a * 0.167 << " on the moon.\n";
    }
}
