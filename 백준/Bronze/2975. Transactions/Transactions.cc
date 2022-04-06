#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; string s;
        cin >> a >> s >> b;
        if(a == 0 && s == "W" && b == 0) break;

        if(s == "D") cout << a + b << "\n";
        else {
            if(a - b < -200) cout << "Not allowed\n";
            else cout << a - b << "\n";
        }
    }
}
