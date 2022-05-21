#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        vector<pair<int, string>> v(N);
        for(int i=0; i<N; i++) {
            int a, b, c; cin >> a >> b >> c;
            string str; cin >> str;

            v[i] = {a*b*c, str};
        }

        sort(v.begin(), v.end());

        cout << v[N-1].second << " took clay from " << v[0].second << ".\n";
    }
}
