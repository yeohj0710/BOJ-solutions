#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    string temp = "";
    bool check = false;

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') temp += str[i];
        else if(temp.length() > 0) {
            cout << N * stoi(temp) << "\n";
            check = true;
            temp = "";
        }
    }
    if(temp.length() > 0) {
        cout << N * stoi(temp) << "\n";
        check = true;
        temp = "";
    }

    if(!check) cout << "N/A\n";
}
