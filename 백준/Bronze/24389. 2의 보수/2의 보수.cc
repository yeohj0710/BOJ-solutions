#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int M = ~N + 1;

    int ans = 0;
    for(int i=0; i<32; i++)
        if((N & (1 << i)) ^ (M & (1 << i))) ans++;

    cout << ans << "\n";
}
