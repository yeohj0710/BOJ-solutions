#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v = {0, 1, 9, 32, 380, 4097, 54054, 700099,
                      8742818, 108476326, 1285917070, 15207121743,
                      173726013062, 1982695287783, 22061642063204};

    cout << v[n] << "\n";
}
