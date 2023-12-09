#include <stdio.h>
int main() {
     char name;
     double salary,totalvaluesold,total;
     scanf("%s%lf%lf", &name, &salary, &totalvaluesold);
     total = salary +totalvaluesold * .15;
     printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
