#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int N = 0;
        while(N*N < str.length()) N++;

        while(str.length() < N) str += '*';

        vector<vector<char>> v(N, vector<char>(N));
        int cur = 0;

        for(int i=N-1; i>=0; i--)
            for(int j=0; j<N; j++) {
                if(cur < str.length()) v[j][i] = str[cur];
                else v[j][i] = '*';

                cur++;
            }

        string ans = "";
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(v[i][j] != '*') ans += v[i][j];

        cout << ans << "\n";
    }
}
