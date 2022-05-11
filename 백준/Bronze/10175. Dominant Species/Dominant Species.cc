#include <bits/stdc++.h>
using namespace std;

const int MAX = 5;

int arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string name, str; cin >> name >> str;

        vector<pair<int, char>> v;
        v.push_back({0, 'C'});
        v.push_back({0, 'B'});
        v.push_back({0, 'W'});
        v.push_back({0, 'M'});

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'C') v[0].first += 1;
            else if(str[i] == 'B') v[1].first += 2;
            else if(str[i] == 'W') v[2].first += 3;
            else if(str[i] == 'M') v[3].first += 4;
        }

        sort(v.begin(), v.end(), greater<pair<int, char>>());

        string best; bool check = false;
        if(v[0].first == v[1].first) check = true;
        else if(v[0].second == 'C') best = "Coyote";
        else if(v[0].second == 'B') best = "Bobcat";
        else if(v[0].second == 'W') best = "Wolf";
        else best = "Mountain Lion";

        if(!check) cout << name << ": The " << best << " is the dominant species\n";
        else cout << name << ": There is no dominant species\n";
    }
}
