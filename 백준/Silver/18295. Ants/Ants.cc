#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    unordered_map<int, bool> m;

    while(N--) {
        string x; cin >> x;

        if(x.length() > 7) continue;

        m[stoi(x)] = true;
    }

    for(int i=0; ; i++) {
        if(!m[i]) {
            cout << i << "\n";
            break;
        }
    }
}
