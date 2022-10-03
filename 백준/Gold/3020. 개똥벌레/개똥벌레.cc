#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v, u;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i % 2 == 0) v.push_back(x);
        else u.push_back(x);
    }

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int Min = INT_MAX, cnt = 0;

    for(int i=1; i<=M; i++) {
        int x = N - ((lower_bound(v.begin(), v.end(), i) - v.begin())
                      + (lower_bound(u.begin(), u.end(), M-i+1) - u.begin()));

        if(x < Min) {
            Min = x;
            cnt = 1;
        }
        else if(x == Min) cnt++;
    }

    cout << Min << " " << cnt << "\n";
}
