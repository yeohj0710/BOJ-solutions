#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> Map;
    for(int i=0; i<N; i++) {
        string str; cin >> str;
        sort(str.begin(), str.end());
        Map[str] = true;
    }

    cout << Map.size();
}
