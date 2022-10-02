#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(true) {
        if(N == 0) break;

        string tmp = to_string(N);
        int idx = -1;

        for(int i=0; i<tmp.length(); i++)
            if(tmp[i] == '1') {
                idx = i;
                break;
            }

        if(idx != -1) {
            tmp = tmp.substr(0, idx) + tmp.substr(idx+1, tmp.length()-(idx+1));

            N = 0;

            for(int i=0; i<tmp.length(); i++) N = N * 10 + tmp[i] - '0';
        }
        else N--;

        ans++;
    }

    cout << ans << "\n";
}
