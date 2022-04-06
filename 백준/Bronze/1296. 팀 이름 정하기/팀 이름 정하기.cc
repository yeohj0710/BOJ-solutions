#include<stdio.h>
#include<string.h>

int main() {
    int n, L1 = 0, O1 = 0, V1 = 0, E1 = 0, L2, O2, V2, E2, max_score = -1, max_count = 0, max_num = 0;
    char name1[21], name2[51][21], score[51] = {0, };
    scanf("%s\n%d", name1, &n);
    for(int i=0; i<strlen(name1); i++) {
        if(name1[i] == 'L') L1++;
        else if(name1[i] == 'O') O1++;
        else if(name1[i] == 'V') V1++;
        else if(name1[i] == 'E') E1++;
    }
    for(int i=0; i<n; i++) {
        scanf("%s", name2[i]);
        L2 = 0, O2 = 0, V2 = 0, E2 = 0;
        for(int j=0; j<strlen(name2[i]); j++) {
            if(name2[i][j] == 'L') L2++;
            else if(name2[i][j] == 'O') O2++;
            else if(name2[i][j] == 'V') V2++;
            else if(name2[i][j] == 'E') E2++;
        }
        score[i] = (L1+L2+O1+O2)*(L1+L2+V1+V2)*(L1+L2+E1+E2)*(O1+O2+V1+V2)*(O1+O2+E1+E2)*(V1+V2+E1+E2)%100;
    }
    for(int i=0; i<n; i++) if(score[i] > max_score) max_score = score[i];
    for(int i=0; i<n; i++) if(score[i] == max_score) max_count++;
    if(max_count == 1) {
        for(int i=0; i<n; i++) if(score[i] == max_score) printf("%s", name2[i]);
    }
    else {
        for(int i=0; i<n; i++)
            if(score[i] == max_score) {
                max_num = i;
                break;
            }
        for(int i=max_num+1; i<n; i++) {
            if(score[i] == max_score && strcmp(name2[i], name2[max_num]) < 0) max_num = i;
        }
        printf("%s", name2[max_num]);
    }
}
