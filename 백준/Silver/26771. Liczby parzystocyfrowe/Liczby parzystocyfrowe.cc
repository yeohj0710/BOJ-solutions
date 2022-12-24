#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v;

    while(N > 0) {
        v.push_back(N % 5);
        N /= 5;
    }

    for(int i=v.size()-1; i>=0; i--) cout << v[i] * 2;
    cout << "\n";
}
