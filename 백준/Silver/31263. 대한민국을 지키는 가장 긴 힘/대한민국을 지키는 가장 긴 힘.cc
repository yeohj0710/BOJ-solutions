#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    str = '0' + str;

    vector<int> v(N+1, INT_MAX);
    v[0] = 0, v[1] = 1;

    for(int i=2; i<=N; i++) {
        if(str[i] != '0') v[i] = min(v[i], v[i-1] + 1);

        if(i-1 >= 1) {
            if(str[i-1] != '0') v[i] = min(v[i], v[i-2] + 1);
        }
        if(i-2 >= 1) {
            int x = stoll(str.substr(i-2, 3));

            if(x >= 100 && x <= 641) v[i] = min(v[i], v[i-3] + 1);
        }
    }

    cout << v[N] << "\n";
}
