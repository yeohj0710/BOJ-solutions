#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b;
    map<string, int> m;

    int ans = 0;

    while(cin >> a) {
        cin.ignore();

        getline(cin, b);

        if(m[b] == 0) ans++;

        m[b]++;
    }

    cout << ans << "\n";
}
