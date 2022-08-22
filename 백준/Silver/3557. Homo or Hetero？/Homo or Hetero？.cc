#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    multiset<int> s;
    int cnt = 0;

    while(N--) {
        string str; cin >> str;
        int x; cin >> x;

        if(str == "insert") {
            if(s.count(x) == 0) cnt++;
            s.insert(x);
        }
        else if(str == "delete") {
            if(s.count(x) > 0) {
                s.erase(s.find(x));
                if(s.count(x) == 0) cnt--;
            }
        }

        if(s.size() >= 2 && s.size() > cnt && cnt >= 2) cout << "both\n";
        else if(s.size() >= 2 && s.size() == cnt) cout << "hetero\n";
        else if(s.size() >= 2 && cnt == 1) cout << "homo\n";
        else if(s.size() <= 1) cout << "neither\n";
    }
}
