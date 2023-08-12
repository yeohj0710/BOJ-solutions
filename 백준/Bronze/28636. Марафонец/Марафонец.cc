#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int sum = 0;

    while(N--) {
        string str; cin >> str;

        sum += stoi(str.substr(0, 2)) * 60 + stoi(str.substr(3, 2));
    }

    int a = sum / (60 * 60), b = (sum / 60) % 60, c = sum % 60;

    string aa = to_string(a), bb = to_string(b), cc = to_string(c);

    while(aa.length() < 2) aa = '0' + aa;
    while(bb.length() < 2) bb = '0' + bb;
    while(cc.length() < 2) cc = '0' + cc;

    cout << aa << ":" << bb << ":" << cc << "\n";
}
