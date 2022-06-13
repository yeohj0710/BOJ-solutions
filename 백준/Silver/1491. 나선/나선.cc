#include <bits/stdc++.h>
using namespace std;

int v[5001][5001] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;

    int i = 0, j = 0, cnt = 1, dir = 1;

    while(true) {
        v[i][j] = cnt;

        if(cnt == N * M) {
            cout << j << " " << i << "\n";
            break;
        }

        if(dir == 1 && (j == M-1 || v[i][j+1] != 0)) dir = 2;
        else if(dir == 2 && (i == N-1 || v[i+1][j] != 0)) dir = 3;
        else if(dir == 3 && (j == 0 || v[i][j-1] != 0)) dir = 4;
        else if(dir == 4 && (i == 0 || v[i-1][j] != 0)) dir = 1;

        if(dir == 1) j++;
        else if(dir == 2) i++;
        else if(dir == 3) j--;
        else if(dir == 4) i--;

        cnt++;
    }
}
