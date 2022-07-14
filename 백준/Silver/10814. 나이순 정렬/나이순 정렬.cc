#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int age, num; string name; };

bool cmp(s a, s b) {
    if(a.age != b.age) return a.age < b.age;
    else return a.num < b.num;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].age >> v[i].name;
        v[i].num = i;
    }
    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++)
        cout << v[i].age << " " << v[i].name << "\n";
}
