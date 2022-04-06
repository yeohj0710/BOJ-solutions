#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    bool check = true;
    for(int i=1; i<=N; i++) {
        string str; cin >> str;
        if(str.length() < 6 && stoi(str) != i) {
            check = false;
            break;
        }
    }

    if(check) cout << "makes sense";
    else cout << "something is fishy";
}
