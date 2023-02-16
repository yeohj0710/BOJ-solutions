#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N; cin.ignore();

    vector<int> v(101);

    for(int i=0; i<N; i++) {
        string str; getline(cin, str);

        int cnt = 0;

        for(int j=0; j<str.length(); j++)
            if(str[j] != ' ' && (j == 0 || str[j-1] == ' ')) cnt++;

        v[cnt]++;
    }

    for(int i=1; i<=100; i++)
        if(v[i] > 0) cout << i << " " << v[i] << "\n";
}
