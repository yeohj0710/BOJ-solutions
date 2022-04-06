#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> cnt(N);
    while(M--) {
        int a, b; cin >> a >> b;
        cnt[a-1]++, cnt[b-1]++;
    }

    for(int i=0; i<N; i++)
        cout << cnt[i] << "\n";
}
