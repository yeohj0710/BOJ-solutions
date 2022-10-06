#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(pow(2, N));

    for(int i=0; i<v.size(); i++) cin >> v[i];

    if(M % 2 == 0) {
        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";
    }
    else {
        reverse(v.begin(), v.end());

        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";
    }
}
