#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<string> v;

    string str;

    while(cin >> str)
        if(str != "bubble" && str != "tapioka") v.push_back(str);

    if(v.size() > 0) {
        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";
    }
    else cout << "nothing\n";
}
