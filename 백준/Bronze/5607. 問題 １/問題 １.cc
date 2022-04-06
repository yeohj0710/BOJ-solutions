#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sumA = 0, sumB = 0;
    while(N--) {
        int a, b; cin >> a >> b;
        if(a > b) sumA += a + b;
        else if(a < b) sumB += a + b;
        else sumA += a, sumB += b;
    }

    cout << sumA << " " << sumB;
}
