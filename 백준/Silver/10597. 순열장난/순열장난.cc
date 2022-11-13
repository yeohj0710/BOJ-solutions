#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;

void f(string str, vector<int> v) {
    if(str == "") {
        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";

        exit(0);
    }

    int x = str[0] - '0';

    bool check = true;

    if(x <= 0 || x > N) check = false;

    for(int i=0; i<v.size(); i++)
        if(v[i] == x) check = false;

    if(check) {
        v.push_back(x);
        f(str.substr(1, str.length()-1), v);
        v.pop_back();
    }

    check = true;

    if(str.length() < 2) return;

    x = (str[0] - '0') * 10 + (str[1] - '0');

    if(x <= 0 || x > N) return;

    for(int i=0; i<v.size(); i++)
        if(v[i] == x) check = false;

    if(check) {
        v.push_back(x);
        f(str.substr(2, str.length()-2), v);
        v.pop_back();
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int M = str.length();

    for(int i=1; ; i++) {
        int x = to_string(i).length();

        M -= x;

        if(M == 0) {
            N = i;
            break;
        }
    }

    vector<int> v;

    f(str, v);
}
