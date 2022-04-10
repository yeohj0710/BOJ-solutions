#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, L; cin >> N >> L;

    bool hole[1005] = {};

    for(int i=0; i<N; i++) {
        int value; cin >> value;

        hole[value] = true;
    }

    int ans = 0;
    for(int i=1; i<=1000; i++)
        if(hole[i]) {
            ans++;
            for(int j=0; j<L; j++) hole[i+j] = false;
        }

    cout << ans;
}
