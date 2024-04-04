#include <bits/stdc++.h>
#define int long long
using namespace std;

void f(int i, int j, int x) {
    if(x == 0) {
        cout << "J";
        return;
    }
    if(i < x / 2 && j < x / 2) {
        cout << "J";
        return;
    }
    else if(i < x / 2 && j >= x / 2) {
        cout << "O";
        return;
    }
    else if(i >= x / 2 && j < x / 2) {
        cout << "I";
        return;
    }
    else
        f(i - x / 2, j - x / 2, x / 2);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    for(int i=0; i<(1<<N); i++) f(M - 1, i, 1 << N);
    cout << "\n";
}
