#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<string, int> Map1;
    map<int, string> Map2;

    for(int i=1; i<=N; i++) {
        string str; cin >> str;

        Map1[str] = i;
        Map2[i] = str;
    }

    while(M--) {
        string str; cin >> str;

        if(str[0] >= '0' && str[0] <= '9') cout << Map2[stoi(str)] << "\n";
        else cout << Map1[str] << "\n";
    }
}
