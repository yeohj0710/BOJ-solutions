#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int L = to_string(N).length();

    int ans = 0;
    for(int i=0; i<L-1; i++)
        ans += (pow(10, i+1) - pow(10, i)) * (i + 1);

    ans += (N - (pow(10, L-1) - 1)) * L;

    cout << ans << "\n";
}
