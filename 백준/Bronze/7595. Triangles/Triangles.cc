#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        for(int i=0; i<N; i++) {
            for(int j=0; j<=i; j++) cout << "*";
            cout << "\n";
        }
    }
}
