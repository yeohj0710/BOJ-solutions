#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str, key; cin >> str >> key;

    int cnt = 0;
    for(int i=0; i<str.length()-key.length()+1; i++)
        if(str.substr(i, key.length()) == key) cnt++;

    cout << cnt;
}
