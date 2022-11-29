#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> arr(N+1);
        vector<bool> vis(N+1);

        for(int i=1; i<=N; i++) cin >> arr[i];

        int cnt = 0;
        for(int i=1; i<=N; i++) {
            bool check = false;
            while(true) {
                if(vis[i]) break;

                check = true;
                vis[i] = true;
                i = arr[i];
            }

            if(check) cnt++;
        }

        cout << cnt << "\n";
    }
}
