#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int N; cin >> N;

    vector<string> v;
    for(int i=0; i<str.length(); i++) {
        string temp = "";

        if(i != 0) {
            temp += str[i];
            temp += str[i-1];
            v.push_back(temp);
        }

        temp = "";

        if(i != str.length()-1) {
            temp += str[i];
            temp += str[i+1];
            v.push_back(temp);
        }
    }

    sort(v.begin(), v.end());

    if(N % 2 == 0)
        for(int i=0; i<N/2; i++) cout << v[0];
    else {
        for(int i=0; i<N/2; i++) cout << v[0];
        cout << v[0][0] << "\n";
    }
}
