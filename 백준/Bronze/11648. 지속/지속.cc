#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;
    while(true) {
        if(N < 10) break;

        int temp = 1;
        while(N > 0) {
            temp *= N % 10;
            N /= 10;
        }

        N = temp;
        cnt++;
    }

    cout << cnt;
}
