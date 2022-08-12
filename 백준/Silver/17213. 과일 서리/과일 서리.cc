#include <bits/stdc++.h>
#define int long long
using namespace std;

int co[31][31] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<=30; i++) co[i][0] = 1;
    for(int i=1; i<=30; i++)
        for(int j=1; j<=30; j++) co[i][j] = co[i-1][j-1] + co[i-1][j];

    int N, M; cin >> N >> M;

    cout << co[M-1][N-1] << "\n";
}
