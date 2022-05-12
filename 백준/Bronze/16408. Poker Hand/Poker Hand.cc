#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<string> v(5);
    for(int i=0; i<5; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 1, ans = 0;
    for(int i=1; i<5; i++) {
        if(v[i][0] == v[i-1][0]) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);

    cout << ans << "\n";
}
