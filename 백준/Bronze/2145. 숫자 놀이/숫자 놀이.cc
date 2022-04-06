#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        while(N >= 10) {
            int temp = N, sum = 0;

            while(temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }

            N = sum;
        }

        cout << N << "\n";
    }
}
