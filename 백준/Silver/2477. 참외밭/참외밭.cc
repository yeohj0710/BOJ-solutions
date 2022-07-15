#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(12);
    for(int i=0; i<6; i++) cin >> v[i].first >> v[i].second;
    for(int i=6; i<12; i++) v[i] = v[i-6];

    int a, dir1, dir2;
    for(int i=3; i<12; i++)
        if(v[i].first == v[i-2].first && v[i-1].first == v[i-3].first) {
            a = v[i-2].second * v[i-1].second;
            dir1 = v[i-2].first;
            dir2 = v[i-1].first;
            break;
        }

    int b, c;
    bool check = false;
    for(int i=0; i<6; i++) {
        if(v[i].first != dir1 && v[i].first != dir2) {
            if(!check) {
                b = v[i].second;
                check = true;
            }
            else c = v[i].second;
        }
    }

    int ans = (b*c - a) * N;

    cout << ans << "\n";
}
