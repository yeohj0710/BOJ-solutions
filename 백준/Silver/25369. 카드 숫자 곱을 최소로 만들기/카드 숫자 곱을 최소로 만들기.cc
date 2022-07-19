#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string num = "";
    int mul = 1;

    for(int i=0; i<N; i++) {
        char c; cin >> c;
        num += c;

        mul *= c - '0';
    }

    for(int i=pow(10, N-1); i<pow(10, N); i++) {
        string str = to_string(i);

        bool check = true;
        for(int j=0; j<str.length(); j++)
            if(str[j] == '0') check = false;
        if(!check) continue;

        int temp = 1;
        for(int j=0; j<str.length(); j++) temp *= str[j] - '0';

        if(temp > mul) {
            for(int j=0; j<str.length(); j++) cout << str[j] << " ";
            cout << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
