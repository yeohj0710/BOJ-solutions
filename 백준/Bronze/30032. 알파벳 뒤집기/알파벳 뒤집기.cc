#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            char ch; cin >> ch;

            if(M == 1) {
                if(ch == 'd') cout << 'q';
                if(ch == 'b') cout << 'p';
                if(ch == 'q') cout << 'd';
                if(ch == 'p') cout << 'b';
            }
            else {
                if(ch == 'd') cout << 'b';
                if(ch == 'b') cout << 'd';
                if(ch == 'q') cout << 'p';
                if(ch == 'p') cout << 'q';
            }
        }
        cout << "\n";
    }
}
