#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(4);
    for(int i=0; i<4; i++) v[i] = i+1;

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'H') {
            swap(v[0], v[2]);
            swap(v[1], v[3]);
        }
        else {
            swap(v[0], v[1]);
            swap(v[2], v[3]);
        }
    }

    cout << v[0] << " " << v[1] << "\n";
    cout << v[2] << " " << v[3] << "\n";
}
