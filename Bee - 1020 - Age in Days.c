#include<stdio.h>
#include<math.h>
int main() {
     int a,a1,a2;
     scanf("%d", &a);
     int year = a/365;
     a1= a-(year*365);
     int month = a1/30;
     a2= a1-(month*30);
     printf("%d ano(s)\n", year);
     printf("%d mes(es)\n", month);
     printf("%d dia(s)\n", a2);
    return 0;
}
