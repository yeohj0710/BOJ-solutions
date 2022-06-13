#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;
    string str;

    while(cin >> str) v.push_back(str);

    for(int i=0; i<v.size(); i++) {
        for(int j=1; j<v[i].length(); j+=2)
            cout << char((v[i][j-1] - 'a' + v[i][j] - 'a' - N + 26000) % 26 + 'a');
        cout << " ";
    }
    cout << "\n";
}
