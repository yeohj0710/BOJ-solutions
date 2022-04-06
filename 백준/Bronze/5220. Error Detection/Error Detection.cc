#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int cnt = 0;
        while(a > 0) {
            if(a % 2 == 1) cnt++;
            a /= 2;
        }

        if(cnt % 2 == b) cout << "Valid\n";
        else cout << "Corrupt\n";
    }
}
