#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int R, C;
    cin >> R >> C;
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) cout << "*";
        cout << "\n";
    }
}
