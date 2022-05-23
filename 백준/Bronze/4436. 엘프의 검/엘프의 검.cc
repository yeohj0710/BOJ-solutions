#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<bool> v(10, false);

        for(int i=1; ; i++) {
            string str = to_string(N*i);

            for(int j=0; j<str.length(); j++) v[str[j] - '0'] = true;

            bool check = true;
            for(int j=0; j<10; j++)
                if(!v[j]) check = false;

            if(check) {
                cout << i << "\n";
                break;
            }
        }
    }
}
