#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int x) {
    int tmp = x, sum = 0;

    while(tmp > 0) {
        sum += tmp % 10;
        tmp /= 10;
    }

    return sum * 2;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, x; cin >> N >> x;

    unordered_map<int, int> m;
    m[x] = 1;

    vector<int> v;
    v.push_back(0);
    v.push_back(x);

    for(int i=2; i<=N; i++) {
        x = f(x);
        v.push_back(x);

        if(m[x] != 0) {
            cout << v[m[x] + (N - m[x]) % (i - m[x])] << "\n";
            return 0;
        }

        m[x] = i;
    }

    cout << x << "\n";
}
