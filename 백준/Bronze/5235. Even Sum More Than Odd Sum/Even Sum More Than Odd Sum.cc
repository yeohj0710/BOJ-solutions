#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int even = 0, odd = 0;
        for(int i=0; i<N; i++) {
            int value; cin >> value;
            if(value % 2 == 0) even += value;
            else odd += value;
        }

        if(even > odd) cout << "EVEN\n";
        else if(even < odd) cout << "ODD\n";
        else cout << "TIE\n";
    }
}
