#include <bits/stdc++.h>
using namespace std;

long long fastPow(int A, int B, int C) {
    if(B == 0) return 1;
    if(B == 1) return A % C;

    if(B % 2 == 0) {
        long long ret = fastPow(A, B/2, C);
        return (ret*ret) % C;
    }
    else {
        long long ret = fastPow(A, B-1, C);
        return (ret*A) % C;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, B, C; cin >> A >> B >> C;
    cout << fastPow(A, B, C);
}
