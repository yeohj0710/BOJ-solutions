#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int P, M; cin >> P >> M;
        int check[505] = {}, cnt = 0;
        while(P--) {
            int pos; cin >> pos;
            if(!check[pos]) check[pos] = 1;
            else cnt++;
        }
        cout << cnt << "\n";
    }
}
