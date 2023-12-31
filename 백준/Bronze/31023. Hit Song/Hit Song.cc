#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        unordered_map<string, bool> m;

        while(N--) {
            string str; cin >> str;

            m[str] = true;
        }

        int M; cin >> M; cin.ignore();

        int a = 0, b = 0;

        while(M--) {
            string str; getline(cin, str);

            string word = "";

            for(int i=0; i<str.length(); i++) {
                if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')) {
                    if(word == "") continue;

                    if(m[word]) a++;
                    else b++;

                    word = "";
                }
                else {
                    if(str[i] >= 'A' && str[i] <= 'Z') word += str[i] + 'a' - 'A';
                    else if(str[i] >= 'a' && str[i] <= 'z') word += str[i];
                }
            }

            if(word != "") {
                if(m[word]) a++;
                else b++;
            }
        }

        if(a >= b * 3) cout << "It's a hit!\n";
        else cout << "Delete immediately!\n";
    }
}
