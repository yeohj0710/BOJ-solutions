#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        cout << a << " " << b << " " << c << " ";

        if(a + b + c != 180) cout << "Check\n";
        else cout << "Seems OK\n";
    }
}
