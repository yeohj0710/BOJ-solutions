#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    string str; cin >> str;

    int x = 0, y = 0, lev = 0;
    string ans = "";

    vector<vector<bool>> vis(N, vector<bool>(M));

    while(true) {
        string temp = "";
        bool complete = true;
        int xt = x, yt = y;

        for(int i=0; i<K; i++) {
            bool check = false;
            for(int j=0; j<N; j++) {
                for(int k=0; k<M; k++) {
                    if(v[j][k] == str[i] && !vis[j][k]) {
                        vis[j][k] = true;

                        if(xt < j) {
                            for(int l=0; l<j-xt; l++) temp += 'D';
                        }
                        else if(xt > j) {
                            for(int l=0; l<xt-j; l++) temp += 'U';
                        }

                        if(yt < k) {
                            for(int l=0; l<k-yt; l++) temp += 'R';
                        }
                        else if(yt > k) {
                            for(int l=0; l<yt-k; l++) temp +=' L';
                        }

                        temp += 'P';

                        xt = j, yt = k;

                        check = true;
                        break;
                    }
                }
                if(check) break;
            }
            if(!check) {
                complete = false;
                break;
            }

        }

        if(!complete) break;

        ans += temp;
        lev++;
        x = xt, y = yt;
    }

    if(x < N-1) {
        for(int i=0; i<(N-1)-x; i++) ans += 'D';
    }
    if(y < M-1) {
        for(int i=0; i<(M-1)-y; i++) ans += 'R';
    }

    cout << lev << " " << ans.length() << "\n";
    cout << ans << "\n";
}
