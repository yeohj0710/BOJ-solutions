#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;
        char type; cin >> type;

        if(type == 'C')
            while(N--) {
                char c; cin >> c;
                cout << c - 'A' + 1 << " ";
            }
        else
            while(N--) {
                int n; cin >> n;
                cout << char(n + 'A' - 1) << " ";
            }
        cout << "\n";
    }
}
