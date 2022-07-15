#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin()+1, v.end());

    bool check = true;
    for(int i=1; i<N; i++) {
        if(v[0] <= v[i]) {
            check = false;
            break;
        }

        v[0] += v[i];
    }

    if(check) cout << "Yes\n";
    else cout << "No\n";
}
