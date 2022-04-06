#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long N; cin >> N;

    int score = 0;
    while(true) {
        if(N == 1) break;

        if(N % 2 == 0) N /= 2;
        else N = N*3 + 1;

        score++;
    }

    cout << score;
}
