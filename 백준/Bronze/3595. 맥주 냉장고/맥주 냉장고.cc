#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Min = INT_MAX, a, b, c;
    for(int i=1; i<=N; i++) {
        if(N % i != 0) continue;
        for(int j=1; j<=N/i; j++) {
            if((N/i) % j != 0) continue;
            int k = N/(i*j);

            if(i*j + j*k + k*i < Min) {
                Min = i*j + j*k + k*i;
                a = i, b = j, c = k;
            }
        }
    }

    cout << a << " " << b << " " << c << "\n";
}
