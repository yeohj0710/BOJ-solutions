#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int two = 0, five = 0;

        int temp = 2;
        while(temp <= N) {
            two += N / temp;
            temp *= 2;
        }

        temp = 5;
        while(temp <= N) {
            five += N / temp;
            temp *= 5;
        }

        cout << min(two, five) << "\n";
    }
}
