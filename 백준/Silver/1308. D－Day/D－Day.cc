#include <stdio.h>

int main()
{
    int y[3], m[3], d[3], sum[3] = {0, }, day = 0;
    for(int i=0; i<2; i++) scanf("%d %d %d", &y[i], &m[i], &d[i]);
    if((y[1] - y[0] > 1000) || (y[1] - y[0] == 1000 && m[0] < m[1]) || (y[1] - y[0] == 1000 && m[0] == m[1] && d[0] <= d[1])) {
        printf("gg");
        return 0;
    }
    for(int i=0; i<2; i++) {
        for(int j=0; j<y[i]; j++) {
            sum[i] += 365;
            if(j%4 == 0) sum[i]++;
            if(j%100 == 0) sum[i]--;
            if(j%400 == 0) sum[i]++;
        }
        if(m[i] > 1) sum[i] += 31;
        if(m[i] > 2) sum[i] += 28;
        if(m[i] > 2 && y[i]%4 == 0) sum[i]++;
        if(m[i] > 2 && y[i]%100 == 0) sum[i]--;
        if(m[i] > 2 && y[i]%400 == 0) sum[i]++;
        if(m[i] > 3) sum[i] += 31;
        if(m[i] > 4) sum[i] += 30;
        if(m[i] > 5) sum[i] += 31;
        if(m[i] > 6) sum[i] += 30;
        if(m[i] > 7) sum[i] += 31;
        if(m[i] > 8) sum[i] += 31;
        if(m[i] > 9) sum[i] += 30;
        if(m[i] > 10) sum[i] += 31;
        if(m[i] > 11) sum[i] += 30;
        sum[i] += d[i];
    }
    printf("D-%d", sum[1]-sum[0]);
}
