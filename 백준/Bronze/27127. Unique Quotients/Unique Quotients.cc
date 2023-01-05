#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(10);
    for(int i=0; i<10; i++) v[i] = i;

    int cnt = 0;

    while(true) {
        int a = 0, b = 0;

        for(int i=0; i<5; i++) a = a * 10 + v[i];
        for(int i=5; i<10; i++) b = b * 10 + v[i];

        if(b * 9 == a) {
            cnt++;

            if(cnt == N) {
                string x = to_string(a), y = to_string(b);

                if(x.length() == 4) x = '0' + x;
                if(y.length() == 4) y = '0' + y;

                cout << x << " " << y << "\n";
                break;
            }
        }

        if(!next_permutation(v.begin(), v.end())) break;
    }
}
