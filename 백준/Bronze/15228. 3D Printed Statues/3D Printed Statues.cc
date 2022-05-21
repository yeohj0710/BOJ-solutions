#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = INT_MAX;
    for(int i=0; pow(2, i)<=10000; i++) {
        int temp = 0;

        temp += i;
        temp += (N - 1)/pow(2, i) + 1;

        ans = min(ans, temp);
    }

    cout << ans << "\n";
}
