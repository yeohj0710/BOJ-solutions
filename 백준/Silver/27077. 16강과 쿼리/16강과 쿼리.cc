#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string name; int a, b, c, d; };

bool cmp(s &x, s &y) {
    if(x.c != y.c) return x.c > y.c;
    else if(x.a - x.b != y.a - y.b) return x.a - x.b > y.a - y.b;
    else if(x.a != y.a) return x.a > y.a;
    else if(x.name == "korea") return false;
    else if(y.name == "korea") return true;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<s> v(4);

    v[0].name = "korea";    cin >> v[0].a >> v[0].b >> v[0].c;
    v[1].name = "uruguay";  cin >> v[1].a >> v[1].b >> v[1].c;
    v[2].name = "ghana";    cin >> v[2].a >> v[2].b >> v[2].c;
    v[3].name = "portugal"; cin >> v[3].a >> v[3].b >> v[3].c;

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<4; i++) {
        if(v[i].name == "korea") {
            if(i < 2) cout << "cry\n";
            else cout << "unhappy\n";
        }
    }

    int N; cin >> N;

    while(N--) {
        string str; cin >> str;

        string oth, aa, bb;

        if(str == "korea") oth = "portugal", aa = "uruguay", bb = "ghana";
        else if(str == "uruguay") oth = "ghana", aa = "korea", bb = "portugal";
        else if(str == "ghana") oth = "uruguay", aa = "korea", bb = "portugal";
        else if(str == "portugal") oth = "korea", aa = "uruguay", bb = "ghana";

        int j, k, l, m;

        for(int i=0; i<4; i++) {
            if(v[i].name == str) j = i;
            if(v[i].name == oth) k = i;
            if(v[i].name == aa) l = i;
            if(v[i].name == bb) m = i;
        }

        v[j].a++, v[j].d++;
        v[k].b++;

        int jadd = 0, kadd = 0;

        if(v[j].d > v[k].d) jadd = 3;
        else if(v[j].d < v[k].d) kadd = 3;
        else jadd = 1, kadd = 1;

        int ladd = 0, madd = 0;

        if(v[l].d > v[m].d) ladd = 3;
        else if(v[l].d < v[m].d) madd = 3;
        else ladd = 1, madd = 1;

        v[j].c += jadd, v[k].c += kadd, v[l].c += ladd, v[m].c += madd;

        sort(v.begin(), v.end(), cmp);

        for(int i=0; i<4; i++) {
            if(v[i].name == "korea") {
                if(i < 2) cout << "cry\n";
                else cout << "unhappy\n";
            }
        }

        for(int i=0; i<4; i++) {
            if(v[i].name == str) j = i;
            if(v[i].name == oth) k = i;
            if(v[i].name == aa) l = i;
            if(v[i].name == bb) m = i;
        }

        v[j].c -= jadd, v[k].c -= kadd, v[l].c -= ladd, v[m].c -= madd;
    }
}
