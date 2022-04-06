#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    string key; cin >> key;

    while(M--) {
        string code; cin >> code;

        int i = 0;
        for(int j=0; j<code.length(); j++) {
            if(code[j] == key[i]) i++;
        }

        if(i == key.length()) cout << "true\n";
        else cout << "false\n";
    }
}
