#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int bunch[100], piece[100];
    for(int i=0; i<M; i++)
        cin >> bunch[i] >> piece[i];

    sort(bunch, bunch+M);
    sort(piece, piece+M);

    cout << min(((N-1)/6 + 1)*bunch[0], min(N*piece[0], N/6*bunch[0] + N%6*piece[0]));
}
