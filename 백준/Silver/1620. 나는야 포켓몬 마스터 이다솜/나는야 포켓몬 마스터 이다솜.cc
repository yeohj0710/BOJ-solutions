#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<string, int> ma;
    map<int, string> mb;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        ma[str] = i+1;
        mb[i+1] = str;
    }

    while(M--) {
        string str; cin >> str;

        if(str[0] >= '0' && str[0] <= '9') cout << mb[stoi(str)] << "\n";
        else cout << ma[str] << "\n";
    }
}
