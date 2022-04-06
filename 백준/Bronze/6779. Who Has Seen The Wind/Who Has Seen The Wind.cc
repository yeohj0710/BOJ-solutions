#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int h, M; cin >> h >> M;
    for(int i=1; i<=M; i++) {
        int A = -6*i*i*i*i + h*i*i*i + 2*i*i + i;

        if(A <= 0) {
            cout << "The balloon first touches ground at hour: " << i;
            return 0;
        }
    }

    cout << "The balloon does not touch ground in the given time.";
}
