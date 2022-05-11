#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, H, W; cin >> N >> H >> W;

    vector<bool> v(N*W);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i % 2 == 0)
            for(int j=W*i; j<W*(i+1); j++) v[j + x] = true;
        else
            for(int j=W*i; j<W*(i+1); j++) v[j - x] = true;
    }

    int cnt = 0;
    for(int i=0; i<N*W; i++)
        if(!v[i]) cnt++;

    cout << cnt * H << "\n";
}
