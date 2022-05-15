#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<string, int>> v(N);
    int Max = 0, idx;

    for(int i=0; i<N; i++) {
        string str; cin >> str;
        int x; cin >> x;

        if(x > Max) {
            Max = x;
            idx = i;
        }

        v[i] = {str, x};
    }

    for(int i=0; i<N; i++)
        if(v[i].second == Max) {
            cout << v[i].first << "\n";
            break;
        }
}
