#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int p = 0;

    while(true) {
        if(N % 2 != 0) break;

        N /= 2;
        p++;
    }

    cout << N << " " << p << "\n";
}
