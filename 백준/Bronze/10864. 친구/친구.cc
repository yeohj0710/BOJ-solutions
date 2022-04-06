#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int cnt[1001] = {};

    while(M--) {
        int a, b; cin >> a >> b;
        cnt[a]++, cnt[b]++;
    }

    for(int i=1; i<=N; i++)
        cout << cnt[i] << "\n";
}
