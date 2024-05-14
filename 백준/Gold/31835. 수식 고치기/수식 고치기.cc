#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<char> v = {'T', '&'};
char res;

bool f() {
    bool ans = false;

    if(v[0] == 'T') ans = true;

    bool bres = false;

    if(res == 'T') bres = true;

    for(int i=2; i<v.size(); i++) {
        bool mul = false;

        if(v[i] == 'T') mul = true;

        if(v[i-1] == '&') ans &= mul;
        else ans |= mul;
    }

    if(ans == bres) return true;
    else return false;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=0; i<N; i++) {
        char ch; cin >> ch;

        v.push_back(ch);
    }

    cin >> res;

    int ans = 3;

    N = v.size();

    if(f()) ans = min(ans, (int)0);

    if(v[N-3] == 'T') v[N-3] = 'F';
    else v[N-3] = 'T';

    if(f()) ans = min(ans, (int)1);

    if(v[N-1] == 'T') v[N-1] = 'F';
    else v[N-1] = 'T';

    if(f()) ans = min(ans, (int)2);

    if(v[N-3] == 'T') v[N-3] = 'F';
    else v[N-3] = 'T';

    if(f()) ans = min(ans, (int)1);

    if(v[N-1] == 'T') v[N-1] = 'F';
    else v[N-1] = 'T';

    if(v[N-2] == '&') v[N-2] = '|';
    else v[N-2] = '&';

    if(f()) ans = min(ans, (int)1);

    if(v[N-3] == 'T') v[N-3] = 'F';
    else v[N-3] = 'T';

    if(f()) ans = min(ans, (int)2);

    if(v[N-1] == 'T') v[N-1] = 'F';
    else v[N-1] = 'T';

    if(f()) ans = min(ans, (int)3);

    if(v[N-3] == 'T') v[N-3] = 'F';
    else v[N-3] = 'T';

    if(f()) ans = min(ans, (int)2);

    cout << ans << "\n";
}
