#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int prev, curr, ans = 0;

    cin >> prev;
    int low = prev;

    for(int i=1; i<N; i++) {
        cin >> curr;

        if(curr <= prev) {
            ans = max(ans, prev - low);
            low = curr;
        }

        prev = curr;
    }
    ans = max(ans, prev - low);

    cout << ans;
}
