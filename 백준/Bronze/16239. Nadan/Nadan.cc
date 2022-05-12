#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, N; cin >> K >> N;

    int sum = 0;

    for(int i=1; i<N; i++) {
        cout << i << "\n";
        sum += i;
    }

    cout << K - sum << "\n";
}
