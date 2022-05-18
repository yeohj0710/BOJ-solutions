#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, C; cin >> N >> C;

        string str; cin >> str;

        while(C--) str = str.substr(N, str.length()-N) + str;

        cout << str << "\n";
    }
}
