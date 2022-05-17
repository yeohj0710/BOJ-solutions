#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<string, int>> v;
    string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i=N; i<=M; i++) {
        string str = to_string(i);
        string temp = "";

        for(int j=0; j<str.length(); j++) temp += s[str[j] - '0'];

        v.push_back({temp, i});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) {
        cout << v[i].second << " ";

        if(i % 10 == 9) cout << "\n";
    }
}
