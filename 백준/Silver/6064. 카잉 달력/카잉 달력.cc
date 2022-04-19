#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M, x, y; cin >> N >> M >> x >> y;

        x--;
        y--;

        bool check = false;
        for(int i=x; i<N*M; i+=N)
            if(i % M == y) {
                cout << i+1 << "\n";

                check = true;
                break;
            }

        if(!check) cout << "-1\n";
    }
}
