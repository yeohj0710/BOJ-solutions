#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;
        string a, b; cin >> a >> b;

        int cnt = 0;
        for(int i=0; i<N; i++)
            if(a[i] != b[i]) cnt++;

        cout << "Case " << t << ": " << cnt << "\n";
    }
}
