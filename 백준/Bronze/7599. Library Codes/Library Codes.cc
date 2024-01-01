#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string name; int x; cin >> name >> x;

        if(name == "#" && x == 0) break;

        cout << name << " Library\n";

        int N; cin >> N;

        for(int i=1; i<=N; i++) {
            cout << "Book " << i << " ";

            int M; string str; cin >> M >> str;

            int sum = str.length() * x + 2;

            if(sum <= M) cout << "horizontal\n";
            else cout << "vertical\n";
        }
    }
}
