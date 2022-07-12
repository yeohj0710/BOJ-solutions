#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str = "";

    for(int i=0; i<N; i++) {
        char c; cin >> c;

        str += c;
    }

    string asc = str;
    sort(asc.begin(), asc.end());

    queue<pair<string, int>> q;
    q.push({str, 0});

    map<string, bool> vis;
    vis[str] = true;

    while(!q.empty()) {
        string s = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(s == asc) {
            cout << cnt << "\n";
            return 0;
        }

        for(int i=0; i<N-M+1; i++) {
            string temp = s.substr(i, M);
            reverse(temp.begin(), temp.end());
            string rev = s.substr(0, i) + temp + s.substr(i+M, s.length()-(i+M));
            
            if(vis[rev]) continue;
            
            vis[rev] = true;
            q.push({rev, cnt + 1});
        }
    }

    cout << -1 << "\n";
}
