#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int cur = 0, Min = 0;
    vector<int> v(N);

    for(int i=0; i<str.length(); i++) {
        if(i == 0) cur = 0;
        else if(str[i] == '+') {
            if(str[i-1] == '+') cur++;
        }
        else if(str[i] == '=') {
            if(str[i-1] == '+') cur++;
        }
        else if(str[i] == '-') {
            if(str[i-1] == '=') cur--;
            else if(str[i-1] == '-') cur--;
        }

        v[i] = cur;

        Min = min(Min, cur);
    }

    for(int i=0; i<N; i++) v[i] -= Min;

    int Max = 0;
    for(int i=0; i<N; i++) Max = max(Max, v[i]);

    for(int i=0; i<N; i++) v[i] = Max - v[i];

    for(int i=0; i<=Max; i++) {
        for(int j=0; j<N; j++) {
            if(i == v[j]) {
                if(str[j] == '+') cout << "/";
                else if(str[j] == '=') cout << "_";
                else if(str[j] == '-') cout << "\\";
            }
            else cout << ".";
        }
        cout << "\n";
    }
}
