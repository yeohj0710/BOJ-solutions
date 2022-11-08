#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N+1);
    for(int i=1; i<=N; i++) {
        cin >> v[i].first;

        v[i].second = i;
    }

    sort(v.begin()+1, v.end());

    bool check = false;

    for(int i=1; i<=N; i++) {
        for(int j=N; j>=1; j--) {
            if(i == j) continue;

            if(v[j].first % v[i].first == 0) {
                cout << v[i].second << " " << v[j].second << endl;

                check = true;
                break;
            }
        }

        if(check) break;
    }
}
