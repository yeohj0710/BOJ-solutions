#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double ans; cin >> ans;
        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') continue;

            if(str[i] == '@') ans *= 3;
            else if(str[i] == '%') ans += 5;
            else if(str[i] == '#') ans -= 7;
        }

        cout << fixed; cout.precision(2);
        cout << ans << "\n";
    }
}
