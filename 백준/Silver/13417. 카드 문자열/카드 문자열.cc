#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str = "";

        int N; cin >> N;

        char c; cin >> c;
        str += c;

        for(int i=1; i<N; i++) {
            char c; cin >> c;

            if(c <= str[0]) str = c + str;
            else str = str + c;
        }

        cout << str << "\n";
    }
}
