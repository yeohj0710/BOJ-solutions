#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].first;
        v[i].second = i+1;
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    for(int i=0; i<N; i++) {
        bool check = true;

        if(i > 0 && v[i].first == v[i-1].first) check = false;
        if(i < N-1 && v[i].first == v[i+1].first) check = false;

        if(check) {
            cout << v[i].second << "\n";
            return 0;
        }
    }

    cout << "none\n";
}
