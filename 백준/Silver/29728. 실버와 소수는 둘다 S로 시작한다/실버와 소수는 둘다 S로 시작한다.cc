#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int Max = 5e6 + 1;

    vector<bool> isp(Max, true);
    isp[0] = isp[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) isp[i*j] = false;

    int N; cin >> N;

    deque<char> d; d.push_back('B');
    bool isf = false;

    for(int i=2; i<=N; i++) {
        if(!isp[i]) {
            if(isf) d.push_front('B');
            else d.push_back('B');
            continue;
        }
        if(isf) {
            if(d.front() == 'B') {
                d.pop_front();
                d.push_front('S');
                d.push_front('S');
            }
            else d.push_front('S');
        }
        else {
            if(d.back() == 'B') {
                d.pop_back();
                d.push_back('S');
                d.push_back('S');
            }
            else d.push_back('S');
        }
        isf = !isf;
    }

    int b = 0, s = 0;

    while(!d.empty()) {
        if(d.back() == 'B') b++;
        else s++;

        d.pop_back();
    }

    cout << b << " " << s << "\n";
}
