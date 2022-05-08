#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        long long N; cin >> N;
        int B; cin >> B;

        vector<int> V;

        while(N > 0) {
            V.push_back(N % B);
            N /= B;
        }

        bool check = true;
        for(int i=0; i<V.size()/2; i++)
            if(V[i] != V[V.size() - 1 - i]) check = false;

        if(check) cout << "1\n";
        else cout << "0\n";
    }
}
