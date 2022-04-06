#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    long long sum = 0;
    for(int i=0; i<str.length(); i++) {
        string temp = str.substr(i, str.length()-i) + str.substr(0, i);
        sum += stoi(temp);
    }

    cout << sum;
}
