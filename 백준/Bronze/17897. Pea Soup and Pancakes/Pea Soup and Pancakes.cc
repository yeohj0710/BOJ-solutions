#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    bool found = false;

    while(N--) {
        int M; cin >> M;
        cin.ignore();

        string name; getline(cin, name);

        bool a = false, b = false;

        while(M--) {
            string str; getline(cin, str);
            if(str == "pea soup") a = true;
            else if(str == "pancakes") b = true;
        }

        if(a && b && !found) {
            cout << name << "\n";
            found = true;
        }
    }

    if(!found) cout << "Anywhere is fine I guess\n";
}
