#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v((1 << N) - 1);

    for(int i=0; i<v.size(); i++) cin >> v[i];

    vector<bool> u(v.size());

    for(int i=0; i<N; i++) {
        for(int j=(1 << (N-i-1)) - 1; j<v.size(); j+=(1 << (N-i-1))) {
            if(!u[j]) {
                cout << v[j] << " ";
                u[j] = true;
            }
        }
        cout << "\n";
    }
}
