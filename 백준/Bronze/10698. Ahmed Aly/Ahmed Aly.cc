#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        bool check;
        if(b == "+") {
            if(stoi(a) + stoi(c) == stoi(e)) check = true;
            else check = false;
        }
        else {
            if(stoi(a) - stoi(c) == stoi(e)) check = true;
            else check = false;
        }

        cout << "Case " << t << ": ";
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
