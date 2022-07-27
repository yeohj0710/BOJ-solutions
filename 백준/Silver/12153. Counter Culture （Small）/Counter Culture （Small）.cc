#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> dis(N+1, -1);
        dis[1] = 1;

        queue<int> q;
        q.push(1);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            if(x == N) {
                cout << "Case #" << t << ": " << dis[x] << "\n";
                break;
            }

            if(dis[x+1] == -1) {
                dis[x+1] = dis[x] + 1;
                q.push(x+1);
            }

            string temp = to_string(x);
            reverse(temp.begin(), temp.end());
            int y = stoll(temp);

            if(y <= N && dis[y] == -1) {
                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }
    }
}
