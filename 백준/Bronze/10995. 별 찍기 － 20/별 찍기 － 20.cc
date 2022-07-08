#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        if(i % 2 == 1) {
            for(int j=1; j<=N; j++) cout << "* ";
        }
        else {
            for(int j=1; j<=N; j++) cout << " *";
        }

        cout << "\n";
    }
}
