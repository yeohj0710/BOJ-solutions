#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "VOTE " << t << ": ";

        int N, M; cin >> N >> M;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        map<string, int> m;

        while(M--) {
            string a, c; int b;
            cin >> a >> b >> c;

            m[a] += b;
        }

        int Max = 0;
        for(int i=0; i<N; i++) Max = max(Max, m[v[i]]);

        int cnt = 0;
        for(int i=0; i<N; i++)
            if(m[v[i]] == Max) cnt++;

        if(cnt == 1) {
            for(int i=0; i<N; i++)
                if(m[v[i]] == Max) cout << "THE WINNER IS " << v[i] << " " << m[v[i]] << "\n";
        }
        else cout << "THERE IS A DILEMMA\n";
    }
}
