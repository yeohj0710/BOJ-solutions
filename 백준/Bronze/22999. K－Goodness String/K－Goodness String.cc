#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, K; cin >> N >> K;

        string str; cin >> str;

        int cnt = 0;
        for(int i=0; i<str.length()/2; i++)
            if(str[i] != str[str.length()-1-i]) cnt++;

        cout << "Case #" << t << ": " << abs(K - cnt) << "\n";
    }
}
