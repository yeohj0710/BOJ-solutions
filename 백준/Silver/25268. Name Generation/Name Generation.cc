#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a = "bcdfghjklmnpqrstvwxyz";
    string b = "aeiou";

    int cnt = 0;
    for(int i1=0; i1<a.length(); i1++)
        for(int i2=0; i2<b.length(); i2++)
            for(int i3=0; i3<a.length(); i3++)
                for(int i4=0; i4<b.length(); i4++)
                    for(int i5=0; i5<a.length(); i5++)
                        for(int i6=0; i6<b.length(); i6++)
                            for(int i7=0; i7<a.length(); i7++)
                                for(int i8=0; i8<b.length(); i8++) {
                                    string str = "";
                                    str += a[i1]; str += b[i2];
                                    str += a[i3]; str += b[i4];
                                    str += a[i5]; str += b[i6];
                                    str += a[i7]; str += b[i8];

                                    cout << str << "\n";

                                    cnt++;
                                    if(cnt == N) return 0;
                                }
}
