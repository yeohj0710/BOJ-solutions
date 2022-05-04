#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int cnt[2][5] = {};

        for(int i=0; i<2; i++) {
            int N; cin >> N;

            for(int j=0; j<N; j++) {
                int val; cin >> val;

                cnt[i][val]++;
            }
        }

        if(cnt[0][4] > cnt[1][4]) cout << "A\n";
        else if(cnt[0][4] < cnt[1][4]) cout << "B\n";
        else if(cnt[0][3] > cnt[1][3]) cout << "A\n";
        else if(cnt[0][3] < cnt[1][3]) cout << "B\n";
        else if(cnt[0][2] > cnt[1][2]) cout << "A\n";
        else if(cnt[0][2] < cnt[1][2]) cout << "B\n";
        else if(cnt[0][1] > cnt[1][1]) cout << "A\n";
        else if(cnt[0][1] < cnt[1][1]) cout << "B\n";
        else cout << "D\n";
    }
}
