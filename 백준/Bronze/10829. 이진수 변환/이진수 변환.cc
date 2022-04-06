#include <bits/stdc++.h>
using namespace std;

void BinToDec(long long N) {
    if(N == 0) return;

    BinToDec(N/2);

    cout << N%2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long N; cin >> N;

    BinToDec(N);
}
