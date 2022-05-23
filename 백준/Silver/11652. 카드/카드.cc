#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int Max = 0, cnt = 1;
    for(int i=1; i<N; i++) {
        if(v[i] == v[i-1]) cnt++;
        else {
            Max = max(Max, cnt);
            cnt = 1;
        }
    }
    Max = max(Max, cnt);
    cnt = 1;

    for(int i=1; i<N; i++) {
        if(v[i] == v[i-1]) cnt++;
        else {
            if(cnt == Max) {
                cout << v[i-1] << "\n";
                return 0;
            }
            cnt = 1;
        }
    }
    cout << v[N-1] << "\n";
}
