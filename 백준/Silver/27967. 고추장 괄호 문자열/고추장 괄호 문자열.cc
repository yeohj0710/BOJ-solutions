#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    for(int i=0; i<pow(2, N); i++) {
        int tmp = i;
        string str2 = "";

        bool check = true;
        int cnt = 0;

        for(int j=0; j<N; j++) {
            if(tmp % 2 == 0) str2 += '(', cnt++;
            else str2 += ')', cnt--;

            if(cnt < 0) {
                check = false;
                break;
            }

            tmp /= 2;
        }

        if(cnt != 0) check = false;

        if(!check) continue;

        for(int j=0; j<N; j++)
            if(str[j] != 'G' && str[j] != str2[j]) check = false;

        if(check) {
            cout << str2 << "\n";
            break;
        }
    }
}
