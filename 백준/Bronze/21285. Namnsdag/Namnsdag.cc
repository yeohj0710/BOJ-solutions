#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;
    vector<string> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<N; i++) {
        if(str.length() != v[i].length()) continue;

        int cnt = 0;
        for(int j=0; j<str.length(); j++)
            if(str[j] != v[i][j]) cnt++;

        if(cnt <= 1) {
            cout << i + 1 << "\n";
            break;
        }
    }
}
