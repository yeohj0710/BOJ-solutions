#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        while(true) {
            if(N == 2) break;

            if(N % 2 == 0) {
                for(int i=0; i<N/2; i++) v[i] += v[N - 1 - i];
                N /= 2;
            }
            else {
                for(int i=0; i<=N/2; i++) v[i] += v[N - 1 - i];
                N = N/2 + 1;
            }
        }

        if(v[0] > v[1]) cout << "Alice\n";
        else cout << "Bob\n";
    }
}

