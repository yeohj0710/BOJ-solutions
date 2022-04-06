#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;

    while(N--) {
        int a, b; cin >> a >> b;
        swap(str[a], str[b]);
    }

    cout << str;
}
