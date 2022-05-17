#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;
    for(int i=0; i<N; i++) {
        string str; cin >> str;
        reverse(str.begin(), str.end());
        v.push_back(str);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
