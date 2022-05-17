#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<string> inc(v), dec(v);
    sort(inc.begin(), inc.end());
    sort(dec.begin(), dec.end(), greater<string>());

    bool check = true;
    for(int i=0; i<N; i++)
        if(v[i] != inc[i]) check = false;

    if(check) {
        cout << "INCREASING\n";
        return 0;
    }

    check = true;
    for(int i=0; i<N; i++)
        if(v[i] != dec[i]) check = false;

    if(check) {
        cout << "DECREASING\n";
        return 0;
    }

    cout << "NEITHER\n";
}
