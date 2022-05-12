#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    cout << N << "\n";

    for(int i=1; i<=N; i++) {
        if(i == 1) cout << 1 << " ";
        else if(i == 2) cout << 2 << " ";
        else if(i == N) cout << 997 << " ";
        else cout << i << " ";
    }
}
