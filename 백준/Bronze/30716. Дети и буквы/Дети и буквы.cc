#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    for(int i=0; i<N; i++)
        if(str[i] != str[0]) {
             cout << "Yes\n";

             cout << 1 << " " << i + 1 << " " << 1 << "\n";

             return 0;
        }

    cout << "No\n";
}
