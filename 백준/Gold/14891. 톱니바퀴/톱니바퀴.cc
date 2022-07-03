#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<deque<int>> v(5);
vector<int> dir(5);
vector<bool> vis(5);

void f(int a, int b) {
    dir[a] = b;
    vis[a] = true;

    if(a > 1 && !vis[a-1]) {
        if(b == 0) f(a-1, 0);
        else if(v[a][6] == v[a-1][2]) f(a-1, 0);
        else f(a-1, -b);
    }

    if(a < 4 && !vis[a+1]) {
        if(b == 0) f(a+1, 0);
        else if(v[a][2] == v[a+1][6]) f(a+1, 0);
        else f(a+1, -b);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=1; i<=4; i++) {
        string str; cin >> str;
        for(int j=0; j<8; j++) v[i].push_back(str[j] - '0');
    }

    int N; cin >> N;

    while(N--) {
        int a, b; cin >> a >> b;

        f(a, b);

        for(int i=1; i<=4; i++) {
            if(dir[i] == 1) {
                int x = v[i].back();

                v[i].pop_back();
                v[i].push_front(x);
            }
            else if(dir[i] == -1) {
                int x = v[i].front();

                v[i].pop_front();
                v[i].push_back(x);
            }
        }

        for(int i=0; i<vis.size(); i++) vis[i] = false;
    }

    int ans = 0;
    for(int i=1; i<=4; i++)
        if(v[i][0] == 1) ans += pow(2, i-1);

    cout << ans << "\n";
}
