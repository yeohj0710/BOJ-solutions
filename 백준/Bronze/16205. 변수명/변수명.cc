#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    if(N == 1) {
        cout << str << "\n";

        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') tmp += '_', tmp += char(str[i] + 'a' - 'A');
            else tmp += str[i];
        }

        cout << tmp << "\n";

        str[0] += 'A' - 'a';

        cout << str << "\n";
    }
    else if(N == 2) {
        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '_') tmp += char(str[i+1] + 'A' - 'a'), i++;
            else tmp += str[i];
        }

        cout << tmp << "\n";

        cout << str << "\n";

        tmp[0] += 'A' - 'a';

        cout << tmp << "\n";
    }
    else if(N == 3) {
        str[0] += 'a' - 'A';

        cout << str << "\n";

        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') tmp += '_', tmp += char(str[i] + 'a' - 'A');
            else tmp += str[i];
        }

        cout << tmp << "\n";

        str[0] += 'A' - 'a';

        cout << str << "\n";
    }
}
