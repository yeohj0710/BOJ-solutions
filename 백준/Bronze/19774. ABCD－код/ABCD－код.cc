#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int a = stoi(str.substr(0, 2));
        int b = stoi(str.substr(2, 2));

        if((a*a + b*b) % 7 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
