#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> m;
    vector<string> v;

    while(N--) {
        string str; cin >> str;

        string temp = "";
        for(int i=str.length()-1; i>=0; i--) {
            if(str[i] == '.') break;
            temp = str[i] + temp;
        }

        if(m[temp] == 0) v.push_back(temp);

        m[temp]++;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << " " << m[v[i]] << "\n";
}
