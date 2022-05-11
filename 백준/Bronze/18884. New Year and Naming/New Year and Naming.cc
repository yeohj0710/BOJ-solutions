#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> a(N), b(M);
    for(int i=0; i<N; i++) cin >> a[i];
    for(int i=0; i<M; i++) cin >> b[i];

    int Q; cin >> Q;

    while(Q--) {
        int x; cin >> x;

        x--;
        x = x % (N * M);
        x++;

        int i = 0, j = 0, cnt = 1;
        while(true) {
            if(cnt == x) break;

            i = (i + 1) % N;
            j = (j + 1) % M;
            cnt++;
        }

        cout << a[i] << b[j] << "\n";
    }
}
