#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int N) {
    vector<int> v, u;

    for(int i=1; i*i<=N; i++) {
        if(v.empty() || N/i != v.back()) {
            v.push_back(i);

            if(i != N/i) u.push_back(N/i);
        }
    }

    for(int i=u.size()-1; i>=0; i--) v.push_back(u[i]);

    int sum = (-1) * N;

    for(int i=1; i<v.size(); i++) {
        if((v[i] - v[i-1]) % 2 == 0) continue;

        sum += (v[i] % 2 == 0 ? 1 : -1) * (N / v[i]);
    }

    return sum;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int ans = f(b) - f(a-1);

    cout << ans << "\n";
}
