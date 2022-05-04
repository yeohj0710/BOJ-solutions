#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        int arr[MAX][MAX];
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> arr[i][j];

        int ans = 0;
        for(int j=0; j<M; j++)
            for(int i=N-2; i>=0; i--) {
                if(i > N-2) continue;
                if(arr[i][j] == 1 && arr[i+1][j] == 0) {
                    arr[i][j] = 0;
                    arr[i+1][j] = 1;
                    ans++;
                    i += 2;
                }
            }

        cout << ans << "\n";
    }
}
