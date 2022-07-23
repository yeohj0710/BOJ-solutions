#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int c1, c2; cin >> c1 >> c2;

    vector<int> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int i = 0, j = 0, Min = INT_MAX;

    while(i < N && j < M) {
        Min = min(Min, abs(v[i] - u[j]));

        if(v[i] < u[j]) i++;
        else j++;
    }

    i = 0, j = 0;
    int cnt = 0;

    while(i < N && j < M) {
        if(abs(v[i] - u[j]) == Min) cnt++;

        if(v[i] < u[j]) i++;
        else j++;
    }

    cout << Min + abs(c1 - c2) << " " << cnt << "\n";
}
