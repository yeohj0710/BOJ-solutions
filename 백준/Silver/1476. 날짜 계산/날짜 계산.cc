#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int E, S, M; cin >> E >> S >> M;

    if(E == 15) E = 0;
    if(S == 28) S = 0;
    if(M == 19) M = 0;

    for(int i=1; ; i++)
        if(i % 15 == E && i % 28 == S && i % 19 == M) {
            cout << i;
            return 0;
        }
}
