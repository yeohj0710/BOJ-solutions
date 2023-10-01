#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull Power(__int128 x, __int128 y, __int128 mod) { // ret = (x^y)%mod
    x %= mod;
    __int128 ret = 1;
    while(y > 0) {
        if(y%2 == 1) ret = (ret*x)%mod;
        x = (x*x)%mod;
        y /= 2;
    }
    return (ull)ret;
}

bool checkPrime(ull n, ull a) {
    if(a%n == 0) return true;
    ull k = n-1;
    while(1) {
        ull temp = Power(a, k, n);
        if(temp == n-1) return true;
        if(k%2 == 1) return (temp == 1 || temp == n-1);
        k /= 2;
    }
}

bool isPrime(ull n) {
    if(n == 2 || n == 3) return true;
    if(n%2 == 0) return false;

    ull a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for(int i=0; i<12; i++)
        if(!checkPrime(n, a[i])) {
            return false;
            break;
        }
    return true;
}

ull GCD(ull a, ull b) {
    if(a < b) swap(a, b);
    while(b != 0) {
        ull r = a%b;
        a = b;
        b = r;
    }
    return a;
}

ull findDiv(__int128 n) {
    if(n%2 == 0) return 2;
    if(isPrime(n)) return n;

    __int128 x = rand()%(n-2) + 2, y = x, c = rand()%10 + 1, g = 1;
    while(g == 1) {
        x = (x*x%n + c)%n;
        y = (y*y%n + c)%n;
        y = (y*y%n + c)%n;
        g = GCD(abs(x-y), n);
        if(g == n) return findDiv(n);
    }
    if(isPrime(g)) return g;
    else return findDiv(g);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ull N;
    cin >> N;
    vector<ull> ans;
    while(N > 1) {
        ull div = findDiv(N);
        ans.push_back(div);
        N /= div;
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
