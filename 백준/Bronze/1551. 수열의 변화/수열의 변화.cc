#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;

    string str; cin >> str;
    string tmp = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] != ',') tmp += str[i];
        else {
            v.push_back(stoi(tmp));
            tmp = "";
        }
    }
    v.push_back(stoi(tmp));

    for(int i=0; i<M; i++)
        for(int j=0; j<N-i-1; j++) v[j] = v[j+1] - v[j];

    for(int i=0; i<N-M; i++) {
        cout << v[i];

        if(i != N-M-1) cout << ",";
    }
    cout << "\n";
}
