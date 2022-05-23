#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string str; cin >> str;
        char c; cin >> c;

        int shift = (c - str[0] + 26) % 26;

        for(int i=0; i<str.length(); i++) cout << char((str[i] - 'a' + shift) % 26 + 'a');
        cout << "\n";
    }
}
