#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;
        cin.ignore();

        int i = 0;

        while(N--) {
            string str; getline(cin, str);
            while(i < str.length() && str[i] != ' ') i++;
        }

        cout << ++i << "\n";
    }
}
