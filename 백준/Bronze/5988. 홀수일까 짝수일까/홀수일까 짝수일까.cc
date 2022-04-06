#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int last = str[str.length() - 1] - '0';

        if(last % 2 == 0) cout << "even\n";
        else cout << "odd\n";
    }
}
