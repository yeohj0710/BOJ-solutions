#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;

        vector<vector<int>> v(a, vector<int>(b));
        vector<vector<int>> u(c, vector<int>(d));

        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++) cin >> v[i][j];

        for(int i=0; i<c; i++)
            for(int j=0; j<d; j++) cin >> u[i][j];

        cout << "Case #" << t << ":\n";

        if(b != c) {
            cout << "undefined\n";
            continue;
        }

        vector<vector<int>> ans(a, vector<int>(d));

        for(int i=0; i<a; i++)
            for(int j=0; j<d; j++)
                for(int k=0; k<b; k++) ans[i][j] += v[i][k] * u[k][j];

        for(int i=0; i<a; i++) {
            cout << "| ";
            for(int j=0; j<d; j++) cout << ans[i][j] << " ";
            cout << "|\n";
        }
    }
}
