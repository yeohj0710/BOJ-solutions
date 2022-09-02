#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    vector<int> v;

    while(T--) {
        int N; cin >> N;

        for(int i=2; i<N; i++) {
            if(N % i == 0) {
                v.push_back(i);
                v.push_back(N / i);

                break;
            }
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";

        if(i % 5 == 4) cout << "\n";
    }
}
