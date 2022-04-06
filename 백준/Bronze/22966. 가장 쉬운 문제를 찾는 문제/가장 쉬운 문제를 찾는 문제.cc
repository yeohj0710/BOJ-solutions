#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Min = 10; string ans;
    while(N--) {
        string str; cin >> str;
        int value; cin >> value;

        if(value < Min) {
            ans = str;
            Min = value;
        }
    }

    cout << ans;
}
