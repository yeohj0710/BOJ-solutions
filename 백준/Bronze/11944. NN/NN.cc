#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;

    string s = to_string(N);
    int L = s.length();

    for(int i=0; i<min(N*L, M); i++) cout << s[i%L];
}
