#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> v, u;

void f(int idx, int sum) {
    if(idx == N) {
        u.push_back(sum);
        return;
    }

    f(idx+1, sum);
    f(idx+1, sum+v[idx]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0);

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    int sum = 0;
    for(int i=0; i<N; i++) sum += v[i];

    int ans = sum - (u.size() - 1);

    cout << ans << "\n";
}
