#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    while(true) {
        cout << N << " ";

        if(N == 1) break;

        if(N % 2 == 0) N /= 2;
        else N = 3*N + 1;
    }
}
