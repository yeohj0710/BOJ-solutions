#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> str(N);
    for(int i=0; i<N; i++) cin >> str[i];
    sort(str.begin(), str.end());

    cout << str[M-1];
}
