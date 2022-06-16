#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<bool> vis(10);
vector<string> v;
vector<char> u;

void f(string str, int cnt) {
    if(str.length() == N+1) {
        v.push_back(str);
        return;
    }

    for(int i=0; i<10; i++) {
        if(!vis[i] && (cnt == 0
            || (u[cnt-1] == '<' && str[cnt-1] - '0' < i)
            || (u[cnt-1] == '>' && str[cnt-1] - '0' > i))) {
            vis[i] = true;
            f(str + char('0' + i), cnt + 1);
            vis[i] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    u.resize(N);
    for(int i=0; i<N; i++) cin >> u[i];

    f("", 0);

    cout << v.back() << "\n" << v.front() << "\n";
}
