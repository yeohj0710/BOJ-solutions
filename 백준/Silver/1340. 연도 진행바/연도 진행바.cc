#include<stdio.h>
#include<string.h>

int main()
{
    int year, month, day, hour, min;
    double sum = 0, total;
    char word[20];
    scanf("%s %d, %d %02d:%02d", word, &day, &year, &hour, &min);
    if(!(year%400) || (!(year%4) && (year%100))) total = 366;
    else total = 365;
    if(!strcmp(word, "January")) month = 1;
    else if(!strcmp(word, "February")) month = 2;
    else if(!strcmp(word, "March")) month = 3;
    else if(!strcmp(word, "April")) month = 4;
    else if(!strcmp(word, "May")) month = 5;
    else if(!strcmp(word, "June")) month = 6;
    else if(!strcmp(word, "July")) month = 7;
    else if(!strcmp(word, "August")) month = 8;
    else if(!strcmp(word, "September")) month = 9;
    else if(!strcmp(word, "October")) month = 10;
    else if(!strcmp(word, "November")) month = 11;
    else if(!strcmp(word, "December")) month = 12;
    if(month > 1) sum += 31;
    if(month > 2 && (!(year%400) || (!(year%4) && (year%100)))) sum += 29;
    else if(month > 2) sum += 28;
    if(month > 3) sum += 31;
    if(month > 4) sum += 30;
    if(month > 5) sum += 31;
    if(month > 6) sum += 30;
    if(month > 7) sum += 31;
    if(month > 8) sum += 31;
    if(month > 9) sum += 30;
    if(month > 10) sum += 31;
    if(month > 11) sum += 30;
    sum = (sum - 1 + day)*24*60 + hour*60 + min;
    total = total*24*60;
    printf("%.10f", 100*sum/total);
}
