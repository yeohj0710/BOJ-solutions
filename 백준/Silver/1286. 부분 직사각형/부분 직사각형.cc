#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    N *= 2, M *= 2;

    vector<string> v(N);
    for(int i=0; i<N/2; i++) {
        cin >> v[i];
        v[i] += v[i];
        v[i + N/2] = v[i];
    }

    int cnt[26] = {};
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cnt[v[i][j] - 'A'] += (i+1)*(N-i)*(j+1)*(M-j);

    for(int i=0; i<26; i++) cout << cnt[i] << "\n";
}
