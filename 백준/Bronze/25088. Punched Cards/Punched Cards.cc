#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ":\n";

        int N, M; cin >> N >> M;

        cout << "..+";
        for(int i=0; i<M-1; i++) cout << "-+";
        cout << "\n";

        cout << "..|";
        for(int i=0; i<M-1; i++) cout << ".|";
        cout << "\n";

        for(int i=0; i<N-1; i++) {
            cout << "+";
            for(int j=0; j<M; j++) cout << "-+";
            cout << "\n";

            cout << "|";
            for(int j=0; j<M; j++) cout << ".|";
            cout << "\n";
        }

        cout << "+";
        for(int i=0; i<M; i++) cout << "-+";
        cout << "\n";
    }
}
