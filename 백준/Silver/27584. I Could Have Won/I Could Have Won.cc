#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int N = str.length();

    vector<int> v;

    for(int i=1; i<=N; i++) {
        int aa = 0, bb = 0, a = 0, b = 0;

        for(int j=0; j<N; j++) {
            if(str[j] == 'A') a++;
            else b++;

            if(a == i) aa++, a = b = 0;
            else if(b == i) bb++, a = b = 0;
        }

        if(aa > bb) v.push_back(i);
    }

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}
