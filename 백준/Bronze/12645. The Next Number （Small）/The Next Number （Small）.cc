#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        string str = to_string(N);

        int cnt[10] = {};
        for(int i=0; i<str.length(); i++) cnt[str[i] - '0']++;

        for(int i=N+1; ; i++) {
            string temp = to_string(i);

            int cnt2[10] = {};

            for(int j=0; j<temp.length(); j++) cnt2[temp[j] - '0']++;

            bool check = true;
            for(int j=1; j<=9; j++)
                if(cnt[j] != cnt2[j]) check = false;

            if(check) {
                cout << "Case #" << t << ": " << i << "\n";
                break;
            }
        }
    }
}
