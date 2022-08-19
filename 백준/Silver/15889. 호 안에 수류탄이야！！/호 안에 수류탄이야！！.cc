#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(N-1);
    for(int i=0; i<N-1; i++) cin >> u[i];

    int sum = 0;

    for(int i=0; i<N-1; i++) {
        sum = max(sum, v[i] + u[i]);

        if(sum < v[i+1]) {
            cout << "엄마 나 전역 늦어질 것 같아\n";
            return 0;
        }
    }

    cout << "권병장님, 중대장님이 찾으십니다\n";
}
