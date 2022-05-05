#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int r, g, b; cin >> r >> g >> b;

            int in = 2126*r + 7152*g + 722*b;

            if(in < 510000) cout << "#";
            else if(in < 1020000) cout << "o";
            else if(in < 1530000) cout << "+";
            else if(in < 2040000) cout << "-";
            else cout << ".";
        }
        cout << "\n";
    }
}
