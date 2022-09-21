#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<char>> v(N, vector<char>(N));
    int one = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> v[i][j];

            if(v[i][j] == '1') one++;
        }

    bool b1 = false, b2 = false;

    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[i][j] == '1') cnt++;

        if((N - cnt) + (one - cnt) <= N) b1 = true;
    }

    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j][i] == '1') cnt++;

        if((N - cnt) + (one - cnt) <= N) b2 = true;
    }

    if(b1 && !b2) cout << "-\n";
    else if(!b1 && b2) cout << "|\n";
    else cout << "+\n";
}
