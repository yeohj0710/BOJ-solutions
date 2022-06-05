#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    string ans = "";
    for(int i=0; i<M; i++) ans += '0';
    int dist = 0;

    for(int i=0; i<M; i++) {
        int Min = INT_MAX;

        char c = 'A';
        int cnt = 0;
        for(int j=0; j<N; j++)
            if(c != v[j][i]) cnt++;
        if(cnt < Min) {
            Min = cnt;
            ans[i] = 'A';
        }

        c = 'C';
        cnt = 0;
        for(int j=0; j<N; j++)
            if(c != v[j][i]) cnt++;
        if(cnt < Min) {
            Min = cnt;
            ans[i] = 'C';
        }

        c = 'G';
        cnt = 0;
        for(int j=0; j<N; j++)
            if(c != v[j][i]) cnt++;
        if(cnt < Min) {
            Min = cnt;
            ans[i] = 'G';
        }

        c = 'T';
        cnt = 0;
        for(int j=0; j<N; j++)
            if(c != v[j][i]) cnt++;
        if(cnt < Min) {
            Min = cnt;
            ans[i] = 'T';
        }

        dist += Min;
    }

    cout << ans << "\n" << dist << "\n";
}
