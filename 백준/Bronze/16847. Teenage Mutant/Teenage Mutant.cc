#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        string str; cin >> str;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int cnt = 0;

        for(int i=0; i<M; i++) {
            bool check = false;

            for(int j=0; j<N; j++)
                if(str[i] == v[j][i]) check = true;

            if(!check) cnt++;
        }

        cout << "Data Set " << t << ":\n";
        cout << cnt << "/" << M << "\n\n";
    }
}
