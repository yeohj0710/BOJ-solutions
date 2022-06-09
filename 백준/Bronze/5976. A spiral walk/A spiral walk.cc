#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(N));

    int cur = 1, dir = 0, i = 0, j = 0;

    while(true) {
        v[i][j] = cur;
        if(cur == N*N) break;

        if(dir == 0 && (j == N-1 || v[i][j+1] != 0)) dir++;
        else if(dir == 1 && (i == N-1 || v[i+1][j] != 0)) dir++;
        else if(dir == 2 && (j == 0 || v[i][j-1] != 0)) dir++;
        else if(dir == 3 && (i == 0 || v[i-1][j] != 0)) dir = 0;

        if(dir == 0) j++;
        else if(dir == 1) i++;
        else if(dir == 2) j--;
        else if(dir == 3) i--;

        cur++;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
