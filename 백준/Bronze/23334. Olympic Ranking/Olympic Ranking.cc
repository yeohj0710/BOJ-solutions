#include <bits/stdc++.h>
using namespace std;

struct S { int a, b, c; string name; };

bool cmp(S &x, S &y) {
    if(x.a != y.a) return x.a > y.a;
    else if(x.b != y.b) return x.b > y.b;
    else return x.c > y.c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<S> v(N);
    for(int i=0; i<N; i++) {
        int a, b, c; cin >> a >> b >> c;
        string str; getline(cin, str);

        v[i] = {a, b, c, str};
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].name.substr(1, v[0].name.length()-1) << "\n";
}
