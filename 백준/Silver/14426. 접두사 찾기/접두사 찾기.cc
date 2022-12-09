#include <bits/stdc++.h>
#define int long long
using namespace std;

const int chsize = 26;
int toIdx(char ch) { return ch - 'a'; }

struct trie {
    trie *adj[chsize]; bool isEnd;
    trie() : adj(), isEnd(false) {}

    void add(string &str, int idx = 0) {
        if(idx == str.length()-1) {
            isEnd = true;
            return;
        }

        int nex = toIdx(str[idx]);
        if(adj[nex] == NULL) adj[nex] = new trie;
        adj[nex]->add(str, idx+1);
    }

    bool fpre(string &str, int idx = 0) {
        if(idx == str.length()-1) return true;

        int nex = toIdx(str[idx]);
        if(adj[nex] == NULL) return false;
        return adj[nex]->fpre(str, idx+1);
    }

    bool ftot(string &str, int idx = 0) {
        if(idx == str.length()-1) {
            if(isEnd) return true;
            else return false;
        }

        int nex = toIdx(str[idx]);
        if(adj[nex] == NULL) return false;
        return adj[nex]->ftot(str, idx+1);
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    trie v;

    while(N--) {
        string str; cin >> str;

        v.add(str);
    }

    int ans = 0;

    while(M--) {
        string str; cin >> str;

        if(v.fpre(str)) ans++;
    }

    cout << ans << "\n";
}
