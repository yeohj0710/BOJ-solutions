#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;
        cin.ignore();

        vector<string> v(N);
        for(int i=0; i<N; i++) getline(cin, v[i]);

        int ans = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<i; j++)
                if(v[i] < v[j]) {
                    ans++;
                    break;
                }

        cout << ans << "\n";
    }
}
