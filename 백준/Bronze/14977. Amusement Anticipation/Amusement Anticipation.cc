#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        if(N == 1 || N == 2) {
            cout << 1 << "\n";
            continue;
        }

        bool check = false;
        for(int i=N-3; i>=0; i--)
            if(v[i+1] - v[i] != v[i+2] - v[i+1]) {
                cout << i+2 << "\n";
                check = true;
                break;
            }
        if(!check) cout << 1 << "\n";
    }
}
