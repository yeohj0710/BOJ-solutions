#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, L; cin >> N >> M >> L;

    vector<int> cnt(N);

    int loc = 0, ans = -1;

    while(1) {
        ans++;

        if(++cnt[loc] == M) break;

        if(cnt[loc] % 2) loc = (loc + L)%N;
        else loc = (loc - L + N)%N;
    }

    cout << ans;
}
