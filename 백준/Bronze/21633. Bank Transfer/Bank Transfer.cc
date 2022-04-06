#include <cstdio>
using namespace std;

int main() {
    double K, Ans;
    scanf("%lf", &K);
    Ans = (double)K/100 + 25;
    if(Ans < (double)100) printf("%.3lf", (double)100);
    else if(Ans > (double)2000) printf("%.3lf", (double)2000);
    else printf("%.3lf", Ans);
}
