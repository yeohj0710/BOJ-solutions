#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int N, M; cin >> N >> M;

        int cnt = 0;

        for(int i=N; i<=M; i++) {
            string str = to_string(i);
            for(int j=0; j<str.length(); j++)
                if(str[j] == '0') cnt++;
        }

        cout << cnt << "\n";
    }
}
