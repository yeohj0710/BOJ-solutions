#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    for(int i=1; i<N; i++)
        if(str[i] == str[i-1]) {
            str[i-1] += 'A' - 'a';
            str[i] += 'A' - 'a';
        }

    cout << str << "\n";
}
