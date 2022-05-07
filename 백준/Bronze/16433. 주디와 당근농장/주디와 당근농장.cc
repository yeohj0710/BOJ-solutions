#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, R, C; cin >> N >> R >> C;

    if((R + C) % 2 == 0)
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if((i + j) % 2 == 0) cout << "v";
                else cout << ".";
            }
            cout << "\n";
        }
    else
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if((i + j) % 2 == 0) cout << ".";
                else cout << "v";
            }
            cout << "\n";
        }
}
