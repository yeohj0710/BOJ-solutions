#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> v;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N, vector<int>(M));

    int cur = 0;
    for(int i=2001; i<2500; i++) {
        bool check = true;
        for(int j=2; j<i; j++)
            if(i % j == 0) check = false;

        if(check) {
            v[cur++][0] = i;
            if(cur == N) break;
        }
    }

    for(int i=0; i<N; i++)
        for(int j=1; j<M; j++) v[i][j] = v[i][0] * (j+1);

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
