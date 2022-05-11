#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        if(N % 2 == 0)
            for(int i=0; i<N/2; i++) {
                cout << v[i] << "\n";
                cout << v[N/2 + i] << "\n";
            }
        else {
            for(int i=0; i<N/2; i++) {
                cout << v[i] << "\n";
                cout << v[N/2 + i + 1] << "\n";
            }
            cout << v[N/2] << "\n";
        }
    }
}
