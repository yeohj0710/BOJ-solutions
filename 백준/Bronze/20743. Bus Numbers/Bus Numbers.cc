#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=N; i>=1; i--) {
        int cnt = 0;
        for(int j=1; j*j*j<i; j++)
            for(int k=j+1; k*k*k<i; k++)
                if(j*j*j + k*k*k == i) cnt++;

        if(cnt >= 2) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << "none\n";
}
