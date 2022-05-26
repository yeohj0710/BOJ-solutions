#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<string>> v(N);

    for(int i=0; i<N; i++) {
        int M; cin >> M;
        for(int j=0; j<M; j++) {
            string str; cin >> str;
            v[i].push_back(str);
        }
    }

    cout << v[0].size() << "\n";

    for(int i=0; i<v[0].size(); i++) cout << v[0][i] << "\n";
}
