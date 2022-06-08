#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = -1;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            string str = to_string(v[i] * v[j]);

            bool check = true;
            for(int i=0; i<str.length()-1; i++)
                if(str[i] + 1 != str[i+1]) check = false;

            if(check) ans = max(ans, v[i] * v[j]);
        }

    cout << ans << "\n";
}
