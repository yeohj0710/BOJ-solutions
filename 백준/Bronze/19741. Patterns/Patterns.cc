#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            int curr = i*N + j + 1;

            int cnt = 0;
            for(int k=1; k<=curr; k++)
                if(curr % k == 0) cnt++;

            if(cnt <= K) cout << "*";
            else cout << ".";
        }
        cout << "\n";
    }
}
