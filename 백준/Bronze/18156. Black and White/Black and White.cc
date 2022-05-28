#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(N));

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> v[i][j];
        cin.ignore();
    }

    bool check = true;

    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<N; j++)
            if(v[i][j] == 'B') cnt++;

        if(cnt != N/2) check = false;
    }

    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<N; j++)
            if(v[j][i] == 'B') cnt++;

        if(cnt != N/2) check = false;
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<N-2; j++)
            if(v[i][j] == v[i][j+1] && v[i][j] == v[i][j+2]) check = false;

    for(int i=0; i<N; i++)
        for(int j=0; j<N-2; j++)
            if(v[j][i] == v[j+1][i] && v[j][i] == v[j+2][i]) check = false;

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
