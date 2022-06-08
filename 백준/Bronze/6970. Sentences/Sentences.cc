#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M, K; cin >> N >> M >> K;
        cin.ignore();

        vector<string> v(N), u(M), w(K);
        for(int i=0; i<N; i++) getline(cin, v[i]);
        for(int i=0; i<M; i++) getline(cin, u[i]);
        for(int i=0; i<K; i++) getline(cin, w[i]);

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                for(int k=0; k<K; k++) cout << v[i] << " " << u[j] << " " << w[k] << ".\n";

        cout << "\n";
    }
}
