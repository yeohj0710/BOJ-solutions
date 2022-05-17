#include <bits/stdc++.h>
using namespace std;

struct S {
    int n, a, b, c;
};

bool cmp(S &x, S &y) {
    if(x.a * x.b * x.c != y.a * y.b * y.c) return x.a * x.b * x.c < y.a * y.b * y.c;
    else if(x.a + x.b + x.c != y.a + y.b + y.c) return x.a + x.b + x.c < y.a + y.b + y.c;
    else return x.n < y.n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<S> s(N);
    for(int i=0; i<N; i++) {
        int n, a, b, c; cin >> n >> a >> b >> c;
        s[i] = {n, a, b, c};
    }

    sort(s.begin(), s.end(), cmp);

    cout << s[0].n << " " << s[1].n << " " << s[2].n << "\n";
}
