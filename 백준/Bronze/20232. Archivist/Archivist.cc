#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1996 || n == 1997 || n == 2000 || n == 2007 || n == 2008
       || n == 2013 || n == 2018) printf("SPbSU");
    else if(n == 2006) printf("PetrSU, ITMO");
    else printf("ITMO");
}
