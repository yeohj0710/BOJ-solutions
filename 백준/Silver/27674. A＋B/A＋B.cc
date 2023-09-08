#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        sort(str.begin(), str.end(), greater<char>());

        int num = stoll(str);

        cout << (num / 10) + (num % 10) << "\n";
    }
}
