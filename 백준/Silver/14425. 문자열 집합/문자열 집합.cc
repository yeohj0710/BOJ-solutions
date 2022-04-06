#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<string, bool> Map;

    while(N--) {
        string str; cin >> str;
        Map[str] = true;
    }

    int cnt = 0;
    while(M--) {
        string str; cin >> str;
        if(Map[str]) cnt++;
    }

    cout << cnt;
}
