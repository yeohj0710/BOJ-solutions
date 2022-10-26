#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    int ans = INT_MAX;

    for(int i=M; i>=0; i--) {
        string str = to_string(i);

        bool check = true;

        for(int j=0; j<str.length(); j++)
            for(int k=0; k<N; k++)
                if(str[j] - '0' == v[k]) check = false;

        if(check) {
            ans = min(ans, abs(M - i));
            break;
        }
    }

    for(int i=M; i<=999; i++) {
        string str = to_string(i);

        bool check = true;

        for(int j=0; j<str.length(); j++)
            for(int k=0; k<N; k++)
                if(str[j] - '0' == v[k]) check = false;

        if(check) {
            ans = min(ans, abs(M - i));
            break;
        }
    }

    cout << ans << "\n";
}
