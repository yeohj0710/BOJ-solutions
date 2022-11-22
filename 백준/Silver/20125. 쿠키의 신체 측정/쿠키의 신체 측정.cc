#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<char>> v(N, vector<char>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    int x, y;

    for(int i=1; i<N-1; i++)
        for(int j=1; j<N-1; j++)
            if(v[i][j] == '*' && v[i-1][j] == '*' && v[i+1][j] == '*' && v[i][j-1] == '*' && v[i][j+1] == '*') x = i, y = j;

    cout << x+1 << " " << y+1 << "\n";

    vector<int> u(5);

    for(int i=y-1; i>=0; i--)
        if(v[x][i] == '*') u[0]++;

    for(int i=y+1; i<N; i++)
        if(v[x][i] == '*') u[1]++;

    for(int i=x+1; i<N; i++) {
        if(v[i][y] == '*') u[2]++;
        if(v[i][y-1] == '*') u[3]++;
        if(v[i][y+1] == '*') u[4]++;
    }

    for(int i=0; i<5; i++) cout << u[i] << " ";
    cout << "\n";
}
