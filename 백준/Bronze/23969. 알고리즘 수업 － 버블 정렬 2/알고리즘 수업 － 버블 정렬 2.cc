#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cnt = 0;

    for(int i=N-1; i>=0; i--)
        for(int j=0; j<i; j++)
            if(v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
                cnt++;

                if(cnt == M) {
                    for(int i=0; i<N; i++) cout << v[i] << " ";
                    cout << "\n";
                    return 0;
                }
            }

    cout << -1 << "\n";
}
