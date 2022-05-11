#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int l = 1, r = 50;

        while(true) {
            int m = (l + r)/2;

            cout << m << " ";

            if(m == N) break;
            else if(m < N) l = m + 1;
            else if(m > N) r = m - 1;
        }

        cout << "\n";
    }
}
