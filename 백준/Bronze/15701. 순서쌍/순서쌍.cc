#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;
    for(int i=1; i*i<=N; i++) {
        int j = N/i;

        if(i*j == N) {
            if(i != j) cnt += 2;
            else cnt++;
        }
    }

    cout << cnt;
}
