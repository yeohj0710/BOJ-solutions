#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(N));
    int tot = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> v[i][j];
            if(v[i][j] == 'C') tot++;
        }
        cin.ignore();
    }

    for(int i=0; i<N*N; i++) {
        int cnt = 0;
        for(int j=0; j<=i; j++)
            if(v[j/N][j%N] == 'C') cnt++;

        if(cnt == tot/2) {
            for(int j=0; j<=i; j++) {
                cout << 1;
                if(j % N == N-1) cout << "\n";
            }
            for(int j=i+1; j<N*N; j++) {
                cout << 2;
                if(j % N == N-1) cout << "\n";
            }

            break;
        }
    }
}
