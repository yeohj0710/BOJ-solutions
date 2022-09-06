#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, a, b;

void f(int x, int y, string str) {
    if(str.length() == N) {
        cout << str << "\n";
        return;
    }

    if(x < a) f(x + 1, 0, str + '*');
    if(y < b) f(0, y + 1, str + '!');
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        cin >> N >> a >> b;
        if(N == 0 && a == 0 && b == 0) break;

        cout << "Sequence set " << t << "\n";

        f(0, 0, "");
    }
}
