#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, T; cin >> N >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        int sum = 0, time = 0, cnt = 0;

        while(true) {
            if(sum >= N) break;

            if(cnt != b) sum += a, time++, cnt++;
            else time += c, cnt = 0;
        }

        cout << time << "\n";
    }
}
