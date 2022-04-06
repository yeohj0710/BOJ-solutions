#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        string maxStr; int Max = 0;
        while(N--) {
            string str; int val;
            cin >> str >> val;
            if(val > Max) {
                maxStr = str;
                Max = val;
            }
        }
        cout << maxStr << "\n";
    }
}
