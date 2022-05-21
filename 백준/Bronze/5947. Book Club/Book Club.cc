#include <bits/stdc++.h>
using namespace std;

int arr[50001][51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, Q; cin >> N >> M >> Q;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> arr[i][j];

    vector<bool> check(N+1, true);

    while(Q--) {
        int x, y; cin >> x >> y;

        for(int i=1; i<=N; i++)
            if(arr[i][x] != y) check[i] = false;
    }

    int ans = 0;
    for(int i=1; i<=N; i++)
        if(check[i]) ans++;

    cout << ans << "\n";
}
