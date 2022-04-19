#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<string> List;
    for(int i=0; i<str.length(); i++)
        List.push_back(str.substr(i, str.length()-i));

    sort(List.begin(), List.end());

    for(int i=0; i<List.size(); i++) cout << List[i] << "\n";
}
