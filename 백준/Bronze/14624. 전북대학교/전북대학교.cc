#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N % 2 == 0) {
        cout << "I LOVE CBNU\n";
        return 0;
    }

    for(int i=0; i<N; i++) cout << "*";
    cout << "\n";

    for(int i=0; i<(N+1)/2; i++) {
        for(int j=0; j<((N+1)/2 + i); j++) {
            if(j == (N/2 + i) || j == (N/2 - i)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}
