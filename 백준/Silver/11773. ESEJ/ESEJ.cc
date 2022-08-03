#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<M; i++) {
        int temp = i + 1;

        string str = "";

        while(temp > 0) {
            str += char(temp % 26 + 'a');

            temp /= 26;
        }

        cout << str << " ";
    }

    cout << "\n";
}
