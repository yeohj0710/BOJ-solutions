#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    if(N*M % 3 == 0) cout << "YES";
    else cout << "NO";
}
