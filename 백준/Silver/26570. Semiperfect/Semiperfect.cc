#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> v;
bool ans;

void f(int sum, int idx) {
    if(idx == v.size()) {
        if(sum == N) ans = true;
        return;
    }

    f(sum, idx + 1);
    f(sum + v[idx], idx + 1);
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        cin >> N;

        v.clear();

        for(int i=1; i<N; i++)
            if(N % i == 0) v.push_back(i);

        ans = false;

        f(0, 0);

        if(ans) cout << "Semiperfect\n";
        else cout << "NOT Semiperfect\n";
    }
}
