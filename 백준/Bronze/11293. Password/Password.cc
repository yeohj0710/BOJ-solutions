#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Customer " << t << "\n";

        int N; cin >> N;
        cin.ignore();

        vector<string> v(N);

        for(int i=0; i<N; i++) {
            string str; getline(cin, str);

            string tmp = "";

            for(int j=0; j<str.length(); j++) {
                if(str[j] >= 'A' && str[j] <= 'Z') tmp += str[j];
            }

            v[i] = tmp;
        }

        int M; cin >> M;

        while(M--) {
            int a, b, c; cin >> a >> b >> c;
            char x, y; cin >> x >> y;

            if(v[a-1].length() < min(b, c)) cout << "error\n";
            else if(v[a-1][b-1] == x && v[a-1][c-1] == y) cout << "correct\n";
            else cout << "error\n";
        }
    }
}
