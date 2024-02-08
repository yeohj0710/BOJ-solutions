#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool chk = false;

    for(int i=0; i<N; i++)
        if(v[i] == 3) chk = true;

    if(chk) {
        cout << "None\n";
        return 0;
    }

    for(int i=0; i<N; i++)
        if(v[i] != 5) chk = true;

    if(!chk) {
        cout << "Named\n";
        return 0;
    }

    double avg = 0;

    for(int i=0; i<N; i++) avg += v[i];

    avg /= N;

    if(avg >= 4.5) cout << "High\n";
    else cout << "Common\n";
}
