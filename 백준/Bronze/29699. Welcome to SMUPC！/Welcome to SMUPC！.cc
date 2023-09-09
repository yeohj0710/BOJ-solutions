#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str = "WelcomeToSMUPC";

    int N; cin >> N;

    cout << str[(N - 1) % str.length()] << "\n";
}
