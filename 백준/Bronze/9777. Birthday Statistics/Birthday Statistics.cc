#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N; cin.ignore();

    vector<int> v(13);

    while(N--) {
        string str; getline(cin, str);

        string num = "";
        int b = 0;

        while(str[b] != '/') b++;

        for(int i=b+1; i<str.length(); i++) {
            if(str[i] == '/') break;

            num += str[i];
        }

        v[stoi(num)]++;
    }

    for(int i=1; i<=12; i++) cout << i << " " << v[i] << "\n";
}
