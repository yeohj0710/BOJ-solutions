#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int x1, y1, x2, y2;

    bool check = false;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int x; cin >> x;

            if(x == 1) {
                if(!check) x1 = i, y1 = j, check = true;
                else x2 = i, y2 = j;
            }
        }

    cout << abs(x1 - x2) + abs(y1 - y2) << "\n";
}
