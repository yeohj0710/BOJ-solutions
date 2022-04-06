#include <bits/stdc++.h>
using namespace std;

struct Trie {
    Trie *next[10];
    bool isEnd, isChild;

    Trie() {
        fill(next, next+10, nullptr);
        isEnd = isChild = false;
    }

    ~Trie() {
        for(int i=0; i<10; i++)
            if(next[i]) delete next[i];
    }

    bool insert_(char *key) {
        if(*key == '\0') {
            isEnd = true;
            if(isChild) return false;
            else return true;
        }

        int nextKey = *key - '0';
        if(!next[nextKey]) next[nextKey] = new Trie;
        isChild = true;

        if(!isEnd && next[nextKey]->insert_(key + 1)) return true;
        else return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        Trie *root = new Trie;
        bool check = true;

        int N; cin >> N;
        for(int i=0; i<N; i++) {
            char num[11]; cin >> num;
            if(check && !root->insert_(num)) check = false;
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";

        delete root;
    }
}
