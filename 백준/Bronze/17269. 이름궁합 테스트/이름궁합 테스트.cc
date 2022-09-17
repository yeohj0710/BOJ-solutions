#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string a, b; cin >> a >> b;

    string str = "";
    int i = 0, j = 0;

    while(i < a.length() && j < b.length()) {
        str = str + a[i] + b[j];

        i++, j++;
    }

    while(i < a.length()) {
        str += a[i];
        i++;
    }

    while(j < b.length()) {
        str += b[j];
        j++;
    }

    int cnv[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

    vector<int> v(str.length());
    for(int i=0; i<v.size(); i++) v[i] = cnv[str[i] - 'A'];

    for(int i=v.size()-1; i>1; i--)
        for(int j=0; j<i; j++) v[j] = (v[j] + v[j+1]) % 10;

    cout << v[0]*10 + v[1] << "%\n";
}
