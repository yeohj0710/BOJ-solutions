#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    stack<pair<int, int>> S; // <index, height>

    for(int i=1; i<=N; i++) {
        int h; cin >> h;

        while(!S.empty()) {
            if(S.top().second > h) {
                cout << S.top().first << " ";
                break;
            }
            else S.pop();
        }

        if(S.empty()) cout << "0 ";

        S.push({i, h});
    }
}
