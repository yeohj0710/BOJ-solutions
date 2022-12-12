#include <bits/stdc++.h>
#define int long long
using namespace std;

void f(int N) {
    if(N == 0) {
        cout << "-";
        return;
    }

    f(N-1);

    for(int i=0; i<pow(3, N-1); i++) cout << " ";

    f(N-1);
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N;

    while(cin >> N) {
        f(N);
        cout << "\n";
    }
}
