#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[101][101], ans[101][101] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    for(int i=1; i<N-1; i++)
        for(int j=1; j<M-1; j++)
            if(arr[i][j] < arr[i+1][j] && arr[i][j] < arr[i-1][j] && arr[i][j] < arr[i][j+1] && arr[i][j] < arr[i][j-1]) ans[i][j] = 1;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << ans[i][j] << " ";
        cout << "\n";
    }
}
