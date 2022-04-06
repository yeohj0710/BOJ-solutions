#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        char a, b, c, temp; int num;
        cin >> a >> b >> c >> temp >> num;
        int sum = (a-'A')*26*26 + (b-'A')*26 + (c-'A');
        if(abs(sum-num) <= 100) cout << "nice\n";
        else cout << "not nice\n";
    }
}
