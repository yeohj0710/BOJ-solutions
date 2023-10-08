#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int N; cin >> N;

    int beg = 0, len;

    while(N--) {
        int a; cin >> a >> len;

        beg += a;
    }

    cout << str.substr(beg, len) << "\n";
}
