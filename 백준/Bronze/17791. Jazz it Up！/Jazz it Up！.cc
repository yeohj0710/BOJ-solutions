#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=2; i<N; i++) {
        int NM = i*N;

        bool check = true;
        for(int j=2; j*j<=NM; j++)
            if(NM % (j*j) == 0) check = false;

        if(check) {
            cout << i << "\n";
            break;
        }
    }
}
