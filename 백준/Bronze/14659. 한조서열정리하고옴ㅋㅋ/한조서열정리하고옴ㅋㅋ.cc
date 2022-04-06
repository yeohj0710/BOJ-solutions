#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int c = 0, a = 0, h = 0;
    for(int i=0; i<N; i++) {
        int v; cin >> v;

        if(v > h) {
            h = v;
            c = 0;
        }
        else c++;

        a = max(a, c);
    }
    cout << a;
}
