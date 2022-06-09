#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b;

    while(cin >> a >> b) {
        int i = 0, j = 0;
        while(i < a.length() && j < b.length()) {
            if(a[i] == b[j]) i++, j++;
            else j++;
        }

        if(i == a.length()) cout << "Yes\n";
        else cout << "No\n";
    }
}
