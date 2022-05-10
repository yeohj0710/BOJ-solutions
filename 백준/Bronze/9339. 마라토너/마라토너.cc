#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int M; cin >> M;

        int Min = INT_MAX, MinNum, cnt = 0;
        while(M--) {
            int a, b, c; cin >> a >> b >> c;

            if(b == -1 || c == -1) continue;

            bool check = false;
            for(int i=0; i<N; i++)
                if(a == v[i]) check = true;

            if(!check) continue;

            if(b * 100 + c < Min) {
                Min = b * 100 + c;
                MinNum = a;
            }

            if(b * 100 + c <= 600) cnt++;
        }

        cout << MinNum << " " << cnt << "\n";
    }
}
