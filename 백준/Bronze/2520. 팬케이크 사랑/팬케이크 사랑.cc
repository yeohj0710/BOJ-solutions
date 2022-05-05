#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double arr[5], div[5] = {8, 8, 4, 1, 9};

        double a = INT_MAX;

        for(int i=0; i<5; i++) {
            cin >> arr[i];
            arr[i] /= div[i];

            a = min(a, arr[i]);
        }

        a *= 16;

        div[0] = 1;
        div[1] = 30;
        div[2] = 25;
        div[3] = 10;

        double b = 0;

        for(int i=0; i<4; i++) {
            cin >> arr[i];
            arr[i] /= div[i];

            b += (int)arr[i];
        }

        cout << min((int)a, (int)b) << "\n";
    }
}
