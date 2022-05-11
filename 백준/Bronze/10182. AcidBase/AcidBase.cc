#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    int T; cin >> T;

    while(T--) {
        string str, trash; double x;
        cin >> str >> trash >> x;

        if(str == "H") cout << -log10(x) << "\n";
        else cout << 14.0 + log10(x) << "\n";
    }
}
