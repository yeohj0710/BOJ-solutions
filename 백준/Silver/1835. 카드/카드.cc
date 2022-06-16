#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int i = 0, a = 1, b = 0;

    while(true) {
        if(v[i%N] == 0) {
            if(b == a) {
                v[i%N] = a;
                a++;
                b = 0;
            }
            else b++;

            if(a == N+1) break;
        }
        i++;
    }

    for(int i=0; i<N; i++) cout << v[i] << " ";
    cout << "\n";
}
