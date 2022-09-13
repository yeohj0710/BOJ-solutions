#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    while(N--) {
        string str; getline(cin, str);

        if(str.length() > 10 && str.substr(0, 10) == "Simon says")
            cout << str.substr(10, str.length() - 10) << "\n";
    }
}
