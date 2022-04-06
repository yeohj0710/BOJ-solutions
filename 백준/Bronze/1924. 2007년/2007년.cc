#include<stdio.h>
#include<string.h>

int main() {
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    if(x == 2) sum += 31;
    else if(x == 3) sum += (31 + 28);
    else if(x == 4) sum += (31 + 28 + 31);
    else if(x == 5) sum += (31 + 28 + 31 + 30);
    else if(x == 6) sum += (31 + 28 + 31 + 30 + 31);
    else if(x == 7) sum += (31 + 28 + 31 + 30 + 31 + 30);
    else if(x == 8) sum += (31 + 28 + 31 + 30 + 31 + 30 + 31);
    else if(x == 9) sum += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31);
    else if(x == 10) sum += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30);
    else if(x == 11) sum += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31);
    else if(x == 12) sum += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30);
    sum += y;
    sum %= 7;
    if(sum == 0) printf("SUN");
    else if(sum == 1) printf("MON");
    else if(sum == 2) printf("TUE");
    else if(sum == 3) printf("WED");
    else if(sum == 4) printf("THU");
    else if(sum == 5) printf("FRI");
    else if(sum == 6) printf("SAT");
}
