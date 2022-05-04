#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int sum = 0;
        for(int i=1; i<=N; i++) sum += i;
        cout << sum << " ";

        sum = 0;
        for(int i=1; i<=N*2; i+=2) sum += i;
        cout << sum << " ";

        sum = 0;
        for(int i=2; i<=N*2; i+=2) sum += i;
        cout << sum << "\n";
    }
}
