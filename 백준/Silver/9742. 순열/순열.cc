#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    while(cin >> str) {
        int N; cin >> N;

        cout << str << " " << N << " = ";

        sort(str.begin(), str.end());

        int cnt = 1;

        while(true) {
            if(cnt == N) {
                cout << str << "\n";
                break;
            }

            if(!next_permutation(str.begin(), str.end())) break;

            cnt++;
        }

        if(cnt < N) cout << "No permutation\n";
    }
}
