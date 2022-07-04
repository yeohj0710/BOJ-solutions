#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[100001][4] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        arr[i][x] = arr[i-1][x] + 1;

        for(int j=1; j<=3; j++) {
            if(j == x) continue;

            arr[i][j] = arr[i-1][j];
        }
    }

    while(M--) {
        int a, b; cin >> a >> b;

        for(int i=1; i<=3; i++) cout << arr[b][i] - arr[a-1][i] << " ";
        cout << "\n";
    }
}
