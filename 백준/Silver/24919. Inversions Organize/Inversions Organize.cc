#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        int a = 0, b = 0, c = 0, d = 0;

        for(int i=0; i<N*2; i++)
            for(int j=0; j<N*2; j++) {
                char ch; cin >> ch;

                if(ch != 'I') continue;

                if(i < N && j < N) a++;
                else if(i < N && j >= N) b++;
                else if(i >= N && j < N) c++;
                else if(i >= N && j >= N) d++;
            }

        int ans = abs(a - d) + abs(b - c);

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
