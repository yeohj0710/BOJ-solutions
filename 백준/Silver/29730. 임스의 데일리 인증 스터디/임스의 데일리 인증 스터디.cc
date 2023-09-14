#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(string a, string b) {
    int chk_a = 0, chk_b = 0;

    if(a.length() >= 7 && a.substr(0, 7) == "boj.kr/") chk_a = 1;
    if(b.length() >= 7 && b.substr(0, 7) == "boj.kr/") chk_b = 1;

    if(chk_a != chk_b) return chk_a < chk_b;
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N; cin.ignore();

    vector<string> v(N);

    for(int i=0; i<N; i++) getline(cin, v[i]);

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++) cout << v[i] << "\n";
}
