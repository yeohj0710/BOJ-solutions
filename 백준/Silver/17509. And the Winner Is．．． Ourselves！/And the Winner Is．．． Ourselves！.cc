#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans = 0;

    vector<int> D;

    for(int i=0; i<11; i++) {
        int d, v; cin >> d >> v;

        D.push_back(d);
        ans += v*20;
    }

    sort(D.begin(), D.end());

    for(int i=0; i<11; i++)
        ans += D[i] * (11 - i);

    cout << ans << "\n";
}
