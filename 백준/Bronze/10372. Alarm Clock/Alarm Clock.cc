#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for(int i=0; i<24; i++)
        for(int j=0; j<60; j++) {
            int cnt = 0;

            int a = i, b = j;
            for(int k=0; k<2; k++) {
                cnt += arr[a % 10];
                a /= 10;
            }
            for(int k=0; k<2; k++) {
                cnt += arr[b % 10];
                b /= 10;
            }

            if(cnt == N) {
                if(i < 10 && j < 10) cout << "0" << i << ":" << "0" << j << "\n";
                else if(i < 10) cout << "0" << i << ":" << j << "\n";
                else if(j < 10) cout << i << ":" << "0" << j << "\n";
                else cout << i << ":" << j << "\n";

                return 0;
            }
        }

    cout << "Impossible\n";
}
