#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            bool check = false;
            int x = 0;

            for(int k=0; k<=j; k++)
                if(v[i][j-k] == 'c') {
                    x = k;
                    check = true;
                    break;
                }

            if(check) cout << x << " ";
            else cout << -1 << " ";
        }
        cout << "\n";
    }
}
