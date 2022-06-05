#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;
        string str; cin >> str;

        for(int i=0; i<N; i++) {
            int cnt = 1;
            for(int j=i-1; j>=0; j--) {
                if(j < 0 || str[j] >= str[j+1]) break;
                else cnt++;
            }

            cout << cnt << " ";
        }

        cout << "\n";
    }
}
