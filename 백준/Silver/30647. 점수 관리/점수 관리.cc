#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    struct s { string name; int score,isHidden; };
    vector<s> v(N);

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        if(i == 0) str = str.substr(1, str.length()-1);
        if(i == N-1) str = str.substr(0, str.length()-1);

        v[i].name = str.substr(9, str.find("\"score\"") - str.find("\"name\"") - 10);
        v[i].score = stoi(str.substr(str.find("\"score\"") + 8, str.find("\"isHidden\"") - str.find("\"score\"") - 9));
        v[i].isHidden = stoi(str.substr(str.find("\"isHidden\"") + 11, 1));
    }

    sort(v.begin(), v.end(), [](s a, s b) {
        if(a.score != b.score) return a.score > b.score;
        else return a.name < b.name;
    });

    for(int i=0; i<N; i++) {
        if(v[i].isHidden == 1) continue;

        int cnt = 1;

        for(int j=0; j<N; j++)
            if(v[i].score < v[j].score) cnt++;

        cout << cnt << " " << v[i].name << " " << v[i].score << "\n";
    }
}
