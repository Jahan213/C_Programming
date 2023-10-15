#include <stdio.h>

int main() {

    int day,year,month;
    scanf("%d",&day);
    year = day / 365;
    day = day % 365;
    month = day / 30;
    day = day % 30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;
}
