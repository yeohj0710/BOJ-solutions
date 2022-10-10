#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u;

void f(string str, int x) {
    for(int i=0; i<str.length(); i++) v[str[i] - 'A'] -= x;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        v.clear();
        v.resize(26);

        for(int i=0; i<str.length(); i++) v[str[i]-'A']++;

        u.clear();
        u.resize(10);

        u[0] = v['Z'-'A'];
        f("ZERO", v['Z'-'A']);

        u[2] = v['W'-'A'];
        f("TWO", v['W'-'A']);

        u[6] = v['X'-'A'];
        f("SIX", v['X'-'A']);

        u[8] = v['G'-'A'];
        f("EIGHT", v['G'-'A']);

        u[4] = v['U'-'A'];
        f("FOUR", v['U'-'A']);

        u[3] = v['H'-'A'];
        f("THREE", v['H'-'A']);

        u[1] = v['O'-'A'];
        f("ONE", v['O'-'A']);

        u[5] = v['F'-'A'];
        f("FIVE", v['F'-'A']);

        u[7] = v['V'-'A'];
        f("SEVEN", v['V'-'A']);

        u[9] = v['I'-'A'];
        f("NINE", v['I'-'A']);

        cout << "Case #" << t << ": ";

        for(int i=0; i<10; i++)
            for(int j=0; j<u[i]; j++) cout << i;

        cout << "\n";
    }
}
