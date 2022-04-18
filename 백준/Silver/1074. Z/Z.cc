#include <bits/stdc++.h>
using namespace std;

int N, r, c;
int cnt = 0;

void f(int x, int y, int Size) {
    if(x == r && y == c) {
        cout << cnt << "\n";
        return;
    }

    if(r >= x && r < x + Size && c >= y && c < y + Size) {
        f(x, y, Size/2);
        f(x, y + Size/2, Size/2);
        f(x + Size/2, y, Size/2);
        f(x + Size/2, y + Size/2, Size/2);
    }
    else cnt += Size * Size;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> r >> c;

    f(0, 0, 1 << N);
}
