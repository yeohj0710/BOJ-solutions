#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(3));

    for(int i=0; i<3; i++)
        for(int j=0; j<N; j++) cin >> v[j][i];

    for(int i=0; i<N; i++) sort(v[i].begin(), v[i].end());

    for(int i=0; i<N; i++) cout << v[i][1] << " ";
    cout << "\n";
}
