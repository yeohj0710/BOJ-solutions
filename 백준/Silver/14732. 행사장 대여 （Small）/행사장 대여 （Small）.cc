#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<bool>> v(501, vector<bool>(501));

    while(N--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        for(int i=x1; i<x2; i++)
            for(int j=y1; j<y2; j++) v[i][j] = true;
    }

    int ans = 0;
    for(int i=0; i<=500; i++)
        for(int j=0; j<=500; j++)
            if(v[i][j]) ans++;

    cout << ans << "\n";
}
