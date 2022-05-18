#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<char> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int cnt = 0, ans = 0;
        for(int i=0; i<N; i++) {
            if(v[i] == 'X') cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);

        cout << "The longest contiguous subsequence of X's is of length " << ans << "\n";
    }
}
