#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, B, N, M; cin >> A >> B >> N >> M;

    vector<int> v(100001, -1);
    v[N] = 0;

    queue<int> q;
    q.push(N);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == M) {
            cout << v[M] << "\n";
            break;
        }

        if(x - 1 >= 0 && v[x - 1] == -1) {
            v[x - 1] = v[x] + 1;
            q.push(x - 1);
        }
        if(x + 1 <= 100000 && v[x + 1] == -1) {
            v[x + 1] = v[x] + 1;
            q.push(x + 1);
        }
        if(x - A >= 0 && v[x - A] == -1) {
            v[x - A] = v[x] + 1;
            q.push(x - A);
        }
        if(x + A <= 100000 && v[x + A] == -1) {
            v[x + A] = v[x] + 1;
            q.push(x + A);
        }
        if(x - B >= 0 && v[x - B] == -1) {
            v[x - B] = v[x] + 1;
            q.push(x - B);
        }
        if(x + B <= 100000 && v[x + B] == -1) {
            v[x + B] = v[x] + 1;
            q.push(x + B);
        }
        if(x * A <= 100000 && v[x * A] == -1) {
            v[x * A] = v[x] + 1;
            q.push(x * A);
        }
        if(x * B <= 100000 && v[x * B] == -1) {
            v[x * B] = v[x] + 1;
            q.push(x * B);
        }
    }
}
